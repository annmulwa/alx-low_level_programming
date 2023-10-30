#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

void chk_e(unsigned char *e_ident);
void pr_mgc(unsigned char *e_ident);
void pr_cls(unsigned char *e_ident);
void pr_dat(unsigned char *e_ident);
void pr_ver(unsigned char *e_ident);
void pr_abi(unsigned char *e_ident);
void pr_osab(unsigned char *e_ident);
void pr_tp(unsigned int e_type, unsigned char *e_ident);
void pr_ent(unsigned long int e_entry, unsigned char *e_ident);
void cl_e(int e);

/**
 * chk_e - Checks if a file is elf file
 * @e_ident: a pointer to an array with the ELF magic numbers
 */
void chk_e(unsigned char *e_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_ident[idx] != 127 &&
		    e_ident[idx] != 'E' &&
		    e_ident[idx] != 'L' &&
		    e_ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * pr_mgc - Prints the magic number
 * @e_ident: a pointer to an array with the ELF magic numbers
 */
void pr_mgc(unsigned char *e_ident)
{
	int idx;

	printf("  Magic:   ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", e_ident[idx]);

		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * pr_cls - prints class of an elf header.
 * @e_ident:  pointer to an array with the ELF class
 */
void pr_cls(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * pr_dat - prints the data of an elf header
 * @e_ident: a pointer to an array containing the elf class
 */
void pr_dat(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * pr_ver - prints the version of an elf header.
 * @e_ident: a pointer to an array containing the elf version.
 */
void pr_ver(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * pr_osab - prints the OS/ABI of an elf header.
 * @e_ident: a pointer to an array containing the elf version.
 */
void pr_osab(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * pr_abi - prints the ABI version of an elf header.
 * @e_ident: a pointer to an array with the elf ABI version.
 */
void pr_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * pr_tp - prints the type of an elf header.
 * @e_type: The elf type
 * @e_ident: a pointer to an array containing the elf type
 */
void pr_tp(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * pr_ent - prints the entry point of an elf header.
 * @e_entry: the address of the elf entry point
 * @e_ident: a pointer to an array containing the elf address
 */
void pr_ent(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * cl_e - closes an elf file
 * @e: The file descriptor of the elf file
 */
void cl_e(int e)
{
	if (close(e) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", e);
		exit(98);
	}
}

/**
 * main - prints the information in the
 *        ELF header at the start of an ELF file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int p, d;

	p = open(argv[1], O_RDONLY);
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		cl_e(p);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	d = read(p, header, sizeof(Elf64_Ehdr));
	if (d == -1)
	{
		free(header);
		cl_e(p);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	chk_e(header->e_ident);
	printf("ELF Header:\n");
	pr_mgc(header->e_ident);
	pr_cls(header->e_ident);
	pr_dat(header->e_ident);
	pr_ver(header->e_ident);
	pr_osab(header->e_ident);
	pr_abi(header->e_ident);
	pr_tp(header->e_type, header->e_ident);
	pr_ent(header->e_entry, header->e_ident);

	free(header);
	cl_e(p);
	return (0);
}
