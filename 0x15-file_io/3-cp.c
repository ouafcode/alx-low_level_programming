#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *creat_buff(char *file);
void closeFile(int fp);

/**
 * create_buff - create memory to buffer
 * @file: the name of file to char in
 *
 * Return: pointer to the new allocated buffer
 */
char *create_buff(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",  file);
		exit(99);
	}
	return (b);
}
/**
 * closeFile - close file descriptor
 * @fp: the file to be closed
 */
void closeFile(int fp)
{
	int tr = close(fp);

	if (tr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
}
/**
 * main - copie file to another file
 * @argc: number of arg
 * @argv: an array of pointer to arg
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to;
	int rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
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
	closeFile(from);
	closeFile(to);
	return (0);
}
