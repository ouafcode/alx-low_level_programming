#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read a text file and prints it to the POSIX
 * @filename: file to be read
 * @letters:number of letters it should read and print
 *
 * Return: the actual number of letters , if fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t fp;
	ssize_t	wr;
	ssize_t rd;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	rd = read(fp, c, letters);
	wr = write(STDOUT_FILENO, c, rd);
	free(c);
	close(fp);
	return (wr);
}
