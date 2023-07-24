#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: generate random valid passwords
 * program 101-crakme
 * Return: Always 0 (success)
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while  (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
