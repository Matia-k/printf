#include <stdarg.h>
#include "main.h"
#include <stdio.h>
/**
  *_printf - function produces output according to format.
  *@format: string containg formats to be printed in
  *Return: number of charcters printed.
  */
int _printf(const char *format, ...)
{
	int count, i;
	va_list data;

	va_start(data, format);

	count = 0;
	for (i = 0; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(data, int));
					break;
				case 's':
					count += print_string(va_arg(data, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += print_decimal(va_arg(data, int));
					break;
				case 'i':
					count += print_decimal(va_arg(data, int));
					break;
				default:
					break;
			}
			i += 2;
		}
	}
	return (count);
}


