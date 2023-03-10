#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: input string
 *
 * Return: return str string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' ||
		str[i - 1] == '.' ||
		str[i - 1] == ';' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		str[i - 1] == '\n' ||
		str[i - 1] == '\t' ||
		i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
