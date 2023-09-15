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
	const char *format_ptr;
	char type;
	char *str;

	va_start(args, format);
	separator = "";
	format_ptr = format;

	while (format && *format_ptr)
	{
		type = *format_ptr;

		switch (type)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s%s", separator, str ? str : "(nil)");
				break;
			default:
			break;
		}
		separator = ", ";
		format_ptr++;
	}
	va_end(args);
	printf("\n");
}
