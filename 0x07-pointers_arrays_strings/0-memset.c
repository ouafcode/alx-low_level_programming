#include "main.h"
/**
 * _memset - function that fiils memory with a constent byte
 * @s: pointer to the memory area
 * @b: the constant value filled by in the memory
 * @n: the first number of bytes in the memory
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
