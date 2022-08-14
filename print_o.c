#include "main.h"
/**
 * print_oct - prints a oct
 * @ptr: point to the first option to parameter
 * Return: the length of the the oct
 */
int print_oct(va_list ptr)
{
char *str;
int i;
i = 0;

str = _itoa(va_arg(ptr, unsigned int), 8);

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
