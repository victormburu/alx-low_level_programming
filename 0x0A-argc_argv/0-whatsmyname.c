#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: number of arguments
 * @argv: array of argument
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
