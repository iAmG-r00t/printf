#include "holberton.h"
/**
 * replace_str - replace no printable characters by \x + hexa value
 * @s: pointer to char
 * Return: pointer to char
*/
char *replace_str(char *s)
{
	int i = 0;
	int j = 0;
	char buffer[10000];
	char *ptr;
	char *ptr2;

	ptr = &buffer[0];
	while (s[i])
	{
		if (s[i] < 32)
		{ ptr[j] = 92;
		ptr[j + 1] = 120;
		ptr2 = change_base(s[i], 16);
			if (s[i] < 17)
			{
				ptr[j + 2] = 48;
				ptr[j + 3] = ptr2[0];
			}
			else
			{
				ptr[j + 2] = ptr2[0];
				ptr[j + 3] = ptr2[1];
			}
			j += 4;
		}
			else
			{
				ptr[j] = s[i];
				j++;
			}
		i++;
	}
	ptr[j] = '\0';
return (ptr);
}
/**
 * p_rot13 - prints percent symbol
 * @args: va_list
 * Return: number of characters printed
*/
int p_rot13(va_list args)
{
	char *s;
	char *aux;
	int i = 6;

	s = va_arg(args, char*);
	if (s)
	{
	aux = rot13(s);
	i = _printarg(aux);
	}
	else
	_printarg("(null)");
return (i);
}
/**
  * rot13 - encodes a string into rot13
  * @str: string
  * Return: string encoded
 **/
char *rot13(char *str)
{
	int i, j;
	char *aux;
	char buffer[10000];
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	aux = _strcpy(buffer, str);
	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 52; i++)
		{
			if (input[i] == str[j])
			{
				aux[j] = output[i];
				break;
			}
		}
	}
	aux[j] = '\0';
return (aux);
}
