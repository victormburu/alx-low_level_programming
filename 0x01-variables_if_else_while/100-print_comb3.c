#include <stdio.h>
/**
 * main - Entry point
 * Description 'Inventing is a combination of brains and materials.'
 * Return: Always 0
 */
int main(void)
{
	int dig_1, dig_2;

	for (dig_1 = 0; dig_1 < 9; dig_1++)
	{
		for (dig_2 = dig_1 + 1; dig_2 < 9; dig_2++)
		{
			putchar(dig_1  + '0');
			putchar(dig_2  + '0');

			if (dig_1 != 8 || dig_2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
