#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - prints anything.
* @format: types of arguments
* Return: 0
*/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *separator;
	int i;
	char type;
	char *str;

	va_start(args, format);
	separator = "";
	i = 0;

	while (format && format[i])
	{
		type = format[i];
		while (type == 'c' || type == 'i' || type == 'f' || type == 's')
		{
			if (type == 'c')
				printf("%s%c", separator, va_arg(args, int));
			if (type == 'i')
				printf("%s%d", separator, va_arg(args, int));
			if (type == 'f')
				printf("%s%f", separator, va_arg(args, double));
			if (type == 's')
			{
				str = va_arg(args, char *);
				printf("%s%s", separator, str ? str : "(nil)");
			}
			separator = ", ";
			i++;
			type = format[i];
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
