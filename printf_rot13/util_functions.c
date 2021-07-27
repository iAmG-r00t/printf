#include "holberton.h"
/**
 * p_rev - prints a string in reverse
 * @args: va_list
 * Return: i
*/
int p_rev(va_list args)
{
	char *s;
	int i, j;

	s = va_arg(args, char*);

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	for (j = i; j > 0; j--)
	{
		s--;
		_putchar(s);
	}
return (i);
}
/**
 * p_bin - converts an integer to binary
 * @args: va_list
 * Return: i
*/
int p_bin(va_list args)
{
	int i;
	unsigned int numb;
	char *buffer;

	numb = va_arg(args, int);
	buffer = change_base(numb, 2);
	i = _printarg(buffer);
return (i);
}
/**
 * p_add - print the address of a string
 * @args: va_list
 * Return: i
*/
int p_add(va_list args)
{
	int i;
	unsigned int var;
	char *buffer;

	var = va_arg(args, int);
	buffer = change_hex_low(var, 16);
	i = _printarg("0x");
	i += _printarg(buffer);
return (i);
}
