#include "main.h"
/**
 * print_binary - prints a integer
 * @ptr: point to the first option to parameter
 * Return: the length of the the bianry
 */
int print_binary(va_list ptr)
{
char *str;
int i;
i = 0;
str = _itoa(va_arg(ptr, unsigned int), 2);
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
