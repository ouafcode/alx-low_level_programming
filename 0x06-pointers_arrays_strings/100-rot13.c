#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 *
 * @str: input string
 * Return: output encoded string
 */
char *rot13(char *str)
{
	int i;
	int j;
	char init[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == init[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
