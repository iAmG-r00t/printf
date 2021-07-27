#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
  int len2;
 unsigned int ui;
 void *addr;

//len = _printf("%S\n", "Holberton\nSchool");
//len2 = printf("%S\n", "Holberton\nSchool");
//_printf("Length yo:[%d, %i]\n", len, len);
//printf("Length ellos:[%d, %i]\n", len2, len2);

len = _printf("rot13%R\n", "Holberton School");
//len2 = printf("rot13%R\n", "Holberton School");
_printf("Length yo:[%d, %i]\n", len, len);
//printf("Length ellos:[%d, %i]\n", len2, len2);

//len = _printf("%S\n", "Holberton\nSchool");
//len2 = printf("%S\n", "Holberton\nSchool");
//_printf("Length yo:[%d, %i]\n", len, len);
//printf("Length ellos:[%d, %i]\n", len2, len2);











len = _printf("suma maximos:%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
len2 = printf("suma maximos:%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);

len = _printf("Positive:[%d]\n", 762534);
len2 = printf("Positive:[%d]\n", 762534);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("Negative:[%d]\n", -762534);
len2 =  printf("Negative:[%d]\n", -762534);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("Positive:[%d]\n", 0);
len2 = printf("Positive:[%d]\n", 0);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("Positive:[%d]\n", INT_MAX);
len2 = printf("Positive:[%d]\n", INT_MAX);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("MIN Negative como d:[%d]\n", INT_MIN);
len2 = printf("MIN Negative como d:[%d]\n", INT_MIN);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("MIN Negative como i:[%i]\n", INT_MIN);
len2 = printf("MIN Negative como i:[%i]\n", INT_MIN);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("%");
len2 =  printf("%");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("%c", '\0');
len2 =  printf("%c", '\0');
_printf("Length con jaiber:[%d, %i]\n", len, len);
printf("Length con jaiber:[%d, %i]\n", len2, len2);
len =  _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W','i', "some", "more", 'r', "s", "", "know", 't', ",Jon", '\n');
len2 =  printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W','i', "some", "more", 'r', "s", "", "know", 't', ",Jon", '\n');

//len =  _printf("%c%cth %s%s a%cg%s: me\n", 'W','i', "some", "more", 'r', "s");
//len2 =  printf("%c%cth %s%s a%cg%s: me\n", 'W','i', "some", "more", 'r', "s");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("%kjm");
len2 =  printf("%kjm");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("%!");
len2 = printf("%!");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
 len = _printf("Complete the sentence: You %s nothig. Jon snow. \n", (char *)0);
 len2 = printf("Complete the sentence: You %s nothig. Jon snow. \n", (char *)0);
  _printf("Length yo:[%d, %i]\n", len, len);
  printf("Length ellos:[%d, %i]\n", len2, len2);
// printf("String:[%s]\n", "I am a string !");
len =  _printf(NULL);
 len2 = printf(NULL);
  ui = (unsigned int)INT_MAX + 1024;
  addr = (void *)0x7ffe637541f0;
  _printf("Length yo:[%d, %i]\n", len, len);
  printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("%!\n");
len2 = printf("%!\n");
//len = _printf("impresion de vacio%shola\n", "");
//len2 = _printf("impresion de vacio%shola\n", "");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("%k\n");
len2 = printf("%k\n");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("%%");
len2 = printf("%%");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len = _printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.', '.', "99", "please wait", "\n");
len2 = printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.', '.', "99", "please wait", "\n");
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len =  _printf("Negative:[%d]\n", -762534);
len2 =  printf("Negative:[%d]\n", -762534);
len =  _printf("Unsigned:[%u]\n", ui);
len2 =  printf("Unsigned:[%u]\n", ui);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len =  _printf("Unsigned octal:[%o]\n", ui);
len2 =  printf("Unsigned octal:[%o]\n", ui);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len =  _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
len2 =  printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
len =  _printf("Unsigned hexadecimal:[%x, %X]\n", UINT_MAX, UINT_MAX);
len2 =  printf("Unsigned hexadecimal:[%x, %X]\n", UINT_MAX, UINT_MAX);
_printf("Length yo:[%d, %i]\n", len, len);
printf("Length ellos:[%d, %i]\n", len2, len2);
  _printf("Character:[%c]\n", 'H');
  printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  _printf("Address:[%p]\n", addr);
  printf("Address:[%p]\n", addr);
  len = _printf("Percent:[%%]\n");
  len2 = printf("Percent:[%%]\n");
  _printf("Len:[%d]\n", len);
  printf("Len:[%d]\n", len2);
//  _printf("Unknown:[%r]\n");
//  printf("Unknown:[%r]\n");
  return (0);
}
