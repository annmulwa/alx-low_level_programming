#include "main.h"

/**
 * append_text_to_file - appends characters to text
 * @filename: contains the filename
 * @text_content: contents in the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int append, write_append;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == -1 || access(filename, W_OK) == -1)
		return (-1);
	append = open(filename, O_WRONLY | O_APPEND);
	if (append == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_append = write(append, text_content, strlen(text_content));
		if (write_append == -1)
		{
			close(append);
			return (-1);
		}
	}

	close(append);
	return (1);
}
