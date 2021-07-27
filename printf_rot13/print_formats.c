#include "holberton.h"
/**
 * print_formats - compares and prints according to the struct
 * @i:. iterator
 * @copyfmt: format
 * @args: arguments to print
 * Return: number of characters printed.
*/
int *print_formats(int i, char *copyfmt, va_list args)
{
	fn_t fmt[] = {
			{"c", p_char},
			{"s", p_string},
			{"%", p_percent},
			{"i", p_int},
			{"d", p_int},
			{"b", p_bin},
			{"r", p_rev},
			{"u", p_unsigned},
			{"o", p_octal},
			{"x", p_hex_low},
			{"X", p_hex_upper},
			{"S", p_string_esp},
			{"p", p_add},
			{"R", p_rot13},
			{NULL, NULL}
			};
	int j = 0, k = 1, *count2;
	int ctbuffer2[2];

	i++;
	count2 = &ctbuffer2[0];
	count2[0] = 0;
	count2[1] = 0;
	while (fmt[j].ob != NULL)
	{
		if (copyfmt[i] == *fmt[j].ob)
		{ count2[1] = fmt[j].type(args);
			break; }
		j++;
	}
	if (fmt[j].ob == NULL && copyfmt[i] != '\0')
	{ _putchar("%");
	_putchar(&copyfmt[i]);
	count2[1] += 2; }
	if (fmt[j].ob == NULL && copyfmt[i] == '\0')
	{ count2[1] = -1; }
	count2[0] = k;
return (count2);
}
