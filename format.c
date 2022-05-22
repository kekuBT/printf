#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
/**
 *_chars - prints to the stdout a char
 *@args: argument
 *Return: a char
 */
int _chars(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
/**
 *_str - prints string
 *@args: argument
 *Return: a string
 */
int _str(va_list args)
{
	int i = 0;
	char *str = va_arg(args, int);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}