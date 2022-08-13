#include "main.h"
/**
 * print_str- prints a string
 * @ptr: pointer of type va_list
 * Return: string length
 */
int print_str(va_list ptr)
{
int x;
int len = 0;
char *str;
str = va_arg(ptr, char*);
if (str)
{
for (x = 0; str[x] != '\0'; x++)
{
_putchar(str[x]);
len++;
}
}
return (len);
}
