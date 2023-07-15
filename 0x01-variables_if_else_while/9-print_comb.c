#include <stdio.h>
/**
 * main - Entry point
 * Description ' Patience, persistence and perspiration'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 57; n++)
	{
		putchar(n + '0');
		putchar(' ');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
