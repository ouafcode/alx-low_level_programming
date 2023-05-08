#include "main.h"
/**
 * create_file - function to create file
 * @filename: the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 if success , or -1 if faild
 */
int create_file(const char *filename, char *text_content)
{
	int fl, wr;
	int size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fl, text_content, size);

	if (fl == -1 || wr == -1)
		return (-1);
	close(fl);

	return (1);
}
