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
 *       the string to be printed
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

/**
 * print_digit - print a char
 *
 * @arg: a list of argument pointing to
 *       the digit to be printed
 *
 * Return: Always 0 success
*/
int print_digit(va_list arg)
{
	int n = va_arg(arg, int);
	int last = n % 10;
	int index = 1, aux = 1;
	int num, num_d;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		index++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			aux = aux * 10;
			num = num / 10;
		}
		num = n;
		while (aux > 0)
		{
			num_d = num / aux;
			_putchar(num_d + '0');
			num = num - (num_d * aux);
			aux = aux / 10;
			index++;
		}
	}
	_putchar(last + '0');
	return (index);
}
