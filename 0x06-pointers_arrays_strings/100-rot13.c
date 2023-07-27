#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @n: input value
 * Return: always success
 */
char *rot13(char *n)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 32; j++)
		{
			if (n[i] == data[j])
			{
				n[i] = datarot[j];
break;
			}
		}
	}
	return (n);
}
