#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int counter = 0, i;
	char ch = s[0];

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter; i++)
	{
		counter--;
		ch = s[i];
		s[i] = s[counter];
		s[counter] = ch;

	}
}
