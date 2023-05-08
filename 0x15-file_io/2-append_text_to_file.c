#include "main.h"
/**
 * append_text_to_file - append text at end of file
 * @filename: file to create
 * @text_content: string to add to end of file
 *
 * Return: 1 if success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wr, size = 0;
	int op;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, size);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
