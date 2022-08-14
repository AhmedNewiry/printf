#include "main.h"
/**
 * print_hexU - prints a hex after changing to uppercase
 * @ptr: point to the first option to parameter
 * Return: the length of the the oct
 */
int print_hexU(va_list ptr)
{
char *str;
int i;
i = 0;

str = _itoa(va_arg(ptr, unsigned int), 16);
str = string_toupper(str);

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
