#include "main.h"

/**
 * create_file - creates a file and writes contents in it
 * @filename: contains the file to be created
 * @text_content: content to be written in the file
 * Return: -1 on fail or 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int createfile, writeoutput;

	if (filename == NULL)
		return (-1);
	createfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (createfile == -1)
		return (-1);
	if (text_content != NULL)
	{
		writeoutput = write(createfile, text_content, strlen(text_content));
		{
			if (writeoutput == -1)
			{
				close(createfile);
				return (-1);
			}
		}
	}
	close(createfile);
	return (1);
}
