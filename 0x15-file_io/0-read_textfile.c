#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: nbr of letter to be read
 *
 * Return: actual number of letter or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
	ssize_t ltr, wr, rd;

	ltr = open(filename, 0_RDONLY);
	if (ltr == -1)
		return (0);
	fp = malloc(sizeof(char) * letters);
	rd = read(ltr, fp, letters);
	wr = write(STDOUT_FILENO, fp, rd);

	free(fp);
	close(ltr);
	return (wr);
}
