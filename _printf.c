#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 * _printf - function to print any format
 * @format: string
 *
 * Return: the number of chars printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, cont;
	int (*x)(va_list);
	va_list args;

	cont = -1;
	i = 0;
	va_start(args, format);

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
	{
		return (-1);
	}
	if (format != NULL)
	{
		cont = 0;
		while (format && format[i])
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
			}
			else if (format[i] == '%' && format[i + 1] != '\0')
			{
				x = structure(format[i + 1]);
				if (x != NULL)
				{
					cont += x(args) - 1;
					i++;
				}
				else
					_putchar(format[i]);
			}
			i++;
			cont++;
		}
	}
	va_end(args);
	return (cont);
}