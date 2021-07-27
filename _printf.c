#include "holberton.h"

/**
 * _printf - a function that produces output according to a format.
 *
 * @format: character string.
 *
 * Return: the number of characters printed
 *         (excluding the null byte used to
 *         end output to strings.)
*/

int _printf(const char *format, ...)
{
	va_list arg; /*points to each unnamed arg in trun */
	int mods;

	mod_t format_list[] = {
		{"c", print_char},
		{"s", print_string}
	};

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	mods = print_modifier(format, arg, format_list);

	return (mods);

	va_end(arg);
}
