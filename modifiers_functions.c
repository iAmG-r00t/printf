#include "holberton.h"

/**
 * print_char - print a char
 *
 * @arg: a list of argument pointing to
 *       the character to be printed
 *
 * Return: Always 0 success
*/
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);

	return (0);
}

/**
 * print_string - print a string
 *
 * @arg: a list of argument pointing to
 *       the character to be printed
 *
 * Return: length of string
*/

int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int index = 0;

	if (str == NULL)
		str = "(nil)";
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}

	return (index);
}
