#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	long  x1 = 1, x2 = 2, nextval;

	printf("%ld, ", x1);
	printf("%ld,", x2);
	for (i = 2; i < 50; i++)
	{
		nextval = x2;
		x2 = x2 + x1;
		x1 = nextval;
		printf(", %ld", x2);
	}
	printf("\n");
	return (0);
}
