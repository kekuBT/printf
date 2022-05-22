#ifndef MAIN_
#define MAIN_
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int (*structure(char letter))(va_list);
/**
 * struct func - structure to find the typo of var
 * @fmt: character
 * @f: function
 *
 */
typedef struct func
{
	char *fmt;
	int (*f)(va_list args);
} holder;
int _chars(va_list args);
int _str(va_list args);
int _pnum(va_list args);
int _pint(long c);
int _putchar(char c);
int pcent(va_list args);
#endif