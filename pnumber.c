#include "main.h"
/**
 * _pnum - check if is a positive number
 *@args: arguments
 * Return: the number
 */
int _pnum(va_list args)
{
	long c = va_arg(args, int);
	int psnum = 0;

	if (c < 0)
	{
		_putchar('-');
		c = -c;
		psnum++;
	}
	psnum += _pint(c);
	return (psnum);
}
/**
 *_pint - prints an integer
 *@c: number received
 *Return: number
 */
int _pint(long c)
{
	int len = 0;

	if (c / 10 != 0)
	{
		len += _pint(c / 10);
	}
	len += _putchar((c % 10) + '0');
	return (len);
}