#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024
/**
 * cpy_text - copies one file to another
 * @file_from: file to be copied from
 * @file_to: file to be copied to
 * Return: 0
 */
int cpy_text(const char *file_from, const char *file_to)
{
	int f_from, f_to, f, t;
	char buffer[BUFFER_SIZE];
	ssize_t read_b;

	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	f_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT
			, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(f_from);
		return (99);
	}
	do {
		read_b = read(f_from, buffer, BUFFER_SIZE);
		if (read_b == -1 || (read_b > 0 && write(f_to
						, buffer, read_b) != read_b))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(f_from);
			close(f_to);
			return (99);
		}
	} while (read_b == BUFFER_SIZE);
	f = close(f_from);
	t = close(f_to);
	if (f == -1 || t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
		return (100);
	}
	return (0);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: copied text
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	return (cpy_text(argv[1], argv[2]));
}
