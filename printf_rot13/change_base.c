#include "holberton.h"
/**
* change_base - changes number base
* @num: input number
* @base: base to convert
* Return: pointer to array - with the number converted
*/
char *change_base(unsigned int num, int base)
{
	char symbols[] = "0123456789ABCDEF";
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
