#include "main.h"
/*
 * main - Entry point
 * Description 'if a given number is positive or negative'
 *
 * @param num The number to be checked.
 * @return int Returns 1 if the number is positive, -1 if it is negative
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
