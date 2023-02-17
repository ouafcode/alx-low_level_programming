#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int cmb;

	for (cmb = 0; cmb <= 9; cmb++)
	{
		putchar(cmb + '0');
		if (cmb < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
