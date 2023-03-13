#include <stdio.h>
/**
 * main - adding argument
 * @argc: count number of argument
 * @argv: array for entery argument
 * Return: Always 0 (Success)
 */
int __attribute__ ((unused)) main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
