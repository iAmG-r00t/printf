#include "holberton.h"
/**
* change_hex_low - changes number base
* @num: input number
* @base: base to convert
* Return: pointer to array - with the number converted
*/
char *change_hex_low(unsigned int num, int base)
{
	char symbols[] = "0123456789abcdef";
	static char array[100];
	char *ptr;

	ptr = &array[99];
	*ptr = '\0';
	do {
		*--ptr = symbols[num % base];
		num /= base;
	} while (num != 0);
return (ptr);
}
