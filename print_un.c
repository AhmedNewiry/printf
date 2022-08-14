#include "main.h"
/**
 * print_un - prints a unsigned integer
 * @ptr: point to the first option to parameter
 * Return: the length of the the unsigned integer
 */
int print_un(va_list ptr)
{
char *str;

int i;
i = 0;

str = _itoa(va_arg(ptr, unsigned int), 10);
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
