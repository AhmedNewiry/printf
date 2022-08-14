#include "main.h"
/**
 * print_hex - prints a hex
 * @ptr: point to the first option to parameter
 * Return: the length of the the hex
 */
int print_hex(va_list ptr)
{
char *str;
int i;
i = 0;
str = _itoa(va_arg(ptr, unsigned int), 16);
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
