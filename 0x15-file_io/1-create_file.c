#include "main.h"

/**
 * create_file - creates a file and writes contents in it
 * @filename: contains the file to be created
 * @text_content: content to be written in the file
 * Return: -1 on fail or 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	FILE *createfile;

	if (filename == NULL)
		return (-1);
	createfile = fopen(filename, "w");
	if (createfile == NULL)
		return (-1);
	if (text_content != NULL)
	{
		if (fputs(text_content, createfile) == EOF)
		{
			fclose(createfile);
			return (-1);
		}
	}
	fclose(createfile);
	return (1);
}
