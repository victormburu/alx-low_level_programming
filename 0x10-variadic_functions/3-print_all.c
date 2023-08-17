#include "variadic_functions.h"
/**
 * print_all -  a function that prints anything.
 * @format: input value;
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *sep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(list);
	printf("\n");
}
