#include "holberton.h"
/**
 * p_char - prints char
 * @args: va_list
 * Return: number of characters printed
*/
int p_char(va_list args)
{
	char ch[2];
	int i;

	ch[1] = '\0';
	ch[0] = va_arg(args, int);
	i = _putchar(ch);
return (i);
}
/**
 * p_string - prints string
 * @args: va_list
 * Return: number of characters printed
*/
int p_string(va_list args)
{
	char *s;
	int i = 6;

	s = va_arg(args, char*);
	if (s)
	i = _printarg(s);
	else
	_printarg("(null)");
return (i);
}
/**
 * p_percent - prints percent symbol
 * @args: va_list
 * Return: number of characters printed
*/
int p_percent(va_list args __attribute__((unused)))
{
	char *s;
	int i;

	s = "%";
	i = _putchar(s);
return (i);
}
/**
 * p_int - prints an integer
 * @args: va_list
 * Return: number of characters printed
*/
int p_int(va_list args)
{
	char *str;
	char *sign;
	int i = 0;
	int num;
	unsigned int num2;

	sign = "-";
	num =  va_arg(args, int);
	num2 = num;
	if (num < 0)
	{
		_putchar(sign);
		num2 = -num;
		i = 1;
	}
	str = change_base(num2, 10);
	i += _printarg(str);
return (i);
}
