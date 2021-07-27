#include "holberton.h"
/**
  * _strlen - length of a string
  * @s: input char
  * Return: length of a string
**/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
