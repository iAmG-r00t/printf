#include "holberton.h"

/**
 * print_modifier - function to check the format specifiers
 *
 * @format: list of types of arguments passed to the function
 * @arg: argument list pointer to string to be printed
 * @format_list: pointer to a struct containing specifiers
 *
 * Return: Always 0 (Success)
*/

int print_modifier(const char *format, va_list arg, mod_t *format_list)
{
	int index = 0, j = 0, func_mod = 0;

	while (format[index] != '\0' && format != NULL)
	{
		if (format[index] == '%' && format[index + 1] == '\0')
			return (-1);
		if (format[index] == '%' || (format[index + 1] == '%' && format[index + 1] == ' '))
		{
			/**
			 * if a user has placed a space after our format
			 * specifier we go to the next elemnt in our argument array
			*/
			if (format[index + 1] == ' ')
				index++;

			while (j < SPECIFIERS)
			{
				if (format[index + 1] == *(format_list[j].specifier))
				{
					func_mod += format_list[j].func_specifier(arg);
					index++;
					break;
				}
				j++;
			}
			if (j == SPECIFIERS && format[index + 1] != '%')
				func_mod += _putchar(format[index]);
		}
		else if (format[index] == '%' && format[index + 1] == '%')
		{
			func_mod += _putchar('%');
			index++;
		}
		else
			func_mod += _putchar(format[index]);
		index++;
	}
	return (func_mod);
}
