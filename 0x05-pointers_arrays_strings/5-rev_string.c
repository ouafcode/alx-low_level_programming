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
	char *start_ptr, *end_ptr, ch;

	while (s[counter] != '\0')
		counter++;

	start_ptr = s;
	end_ptr = s + counter - 1;
	for (i = 0; i < (counter - 1) / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = ch;

		start_ptr++;
		end_ptr--;
	}
}
