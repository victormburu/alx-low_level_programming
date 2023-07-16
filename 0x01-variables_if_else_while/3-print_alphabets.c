#include <stdio.h>
/**
 * main - Entry point
 * Description 'alphABET'
 * Return: Always 0
 */
int main(void)
{
	int  c = 97;

	char d = 65;

	while (c <= 122)
	{
		putchar (c);
		c++;
	}
	while (d <= 90)
	{
		putchar (d);
		d++;
	}
	return (0);
}
