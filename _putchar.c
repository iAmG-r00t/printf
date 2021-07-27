#include "holberton.h"

/**
 * _putchar - write a character to stdout
 *
 * @c: the character to print
 *
 * Return: 1 on sucess
 *         -1 on error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
