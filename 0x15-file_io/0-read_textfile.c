#include "main.h"

/**
 * read_textfile - reads contents of a textfile and prints the
 * content to the std output
 * @filename: allocates memory for the string to be printed
 * @letters: letters to be printed
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *readfile;
	char *filesize;
	int lettersnum;

	if (filename == NULL)
		return (0);
	readfile = fopen(filename, "r");
	if (readfile == NULL)
		return (0);
	filesize = malloc(sizeof(char) * (letters + 1));
	if (filesize == NULL)
	{
		fclose(readfile);
		return (0);
	}
	lettersnum = fread(filesize, sizeof(char), letters, readfile);
	if (lettersnum == -1)
	{
		free(filesize);
		fclose(readfile);
		return (0);
	}
	filesize[lettersnum] = '\0';
	write(STDOUT_FILENO, filesize, lettersnum);
	free(filesize);
	fclose(readfile);
	return (lettersnum);
}
