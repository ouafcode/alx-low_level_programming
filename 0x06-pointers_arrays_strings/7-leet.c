#include "main.h"
/**
 * leet -  function that encodes a string into 1337.
 *
 * @s: input string
 * Return: output s
 */
char *leet(char *s)
{
	int i, j;
	char st1[] = "aAeEoOtTlL";
	char st2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == st1[j])
			{
				s[i] = st2[j];
			}
		}
	}
	return (s);
}
