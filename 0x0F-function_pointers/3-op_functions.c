#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two numbers
 * @a: input value
 * @b: input value
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Return the difference of two numbers
 * @a: input value
 * @b: input value
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return the multiplication of two numbers
 * @a: input value
 * @b: input value
 *
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return the division of two numbers
 * @a: input value
 * @b: input value
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Return the reminder of the division of two numbers
 * @a: input value
 * @b: input value
 *
 * Return: the reminder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
