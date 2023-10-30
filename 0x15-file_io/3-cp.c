#include "main.h"
#include <stdio.h>
#include <sys/types.h>

/**
 * err_f - checks if there is error in opening the file
 * @file_from: file to copy contents from
 * @file_to: file to copy contents to
 * @argv: argument vector
 */
void err_f(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - contains the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, cl;
	ssize_t bsize, write_b;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND
			, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	err_f(file_from, file_to, argv);

	bsize = 1024;
	while (bsize == 1024)
	{
		bsize = read(file_from, buff, 1024);
		if (bsize == -1)
			err_f(-1, 0, argv);
		write_b = write(file_to, buff, bsize);
		if (write_b == -1)
			err_f(0, -1, argv);
	}

	cl = close(file_from);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	cl = close(file_to);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
