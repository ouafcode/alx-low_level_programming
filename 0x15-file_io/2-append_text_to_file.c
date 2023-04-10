#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int wr, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	wr = write(fp, text_content, length);
	if (fp == -1 || wr == -1)
		return (-1);
	close(fp);
	return (1);
}
