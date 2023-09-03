#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _atoi - convert a string to a integer
 * @s: input value
 *
 * Return: int convert from the string
 */
int _atoi(char *s)
{
	int a, b, x, len, c, d;

	a = 0;
	b = 0;
	len = 0;
	c = 0;
	d = 0;
	x = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && c == 0)
	{
		if (s[a] == '_')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (b % 2)
				d = -d;
			x = x * 10 + d;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}
	if (c == 0)
		return (0);
	return (x);
}
/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int total, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	total = num1 * num2;

	printf("%d\n", total);

	return (0);
}
