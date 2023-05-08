#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buff_create(char *filename);
void file_cl(int fp);

/**
 * buff_create - allocate byte for a buff
 * @filename: the name of fle of create
 *
 * Return: pointer to the newlyallocated buffer
 */
char *buff_create(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}
/**
 * file_cl - to close file
 * @fp: the file
 *
 * Return: Void
 */
void file_cl(int fp)
{
	int cp;

	cp = close(fp);
	if (cp == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't close fp %d\n", fp);
		exit(100);
	}
}
/**
 * main - copie the content of file to another
 * @argc: nb of argument
 * @argv: an array of pointer
 *
 * Return: 0 of success
 */
int main(int argc, char *argv[])
{
	int rd, wr;
	int from, to;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}
	buff = buff_create(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buff);
	file_cl(from);
	file_cl(to);

	return (0);
}


