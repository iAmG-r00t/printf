#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#define SPECIFIERS 4

/**
 * modifier - Defines a specifier to data types
 *
 * @mod: type of data type
 * @func_mod: pointer to function that prints data types
 *            according to their notation
*/

typedef struct modifier
{
	char *specifier;
	int (*func_specifier)(va_list arg);
} mod_t;


int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_digit(va_list arg);

#endif /* HOLBERTON_H */
