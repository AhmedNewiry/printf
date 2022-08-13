#include "main.h"
/**
 * print_int - prints a integer
 * @ptr: point to the first option to parameter
 * Return: return number of digits
 */
int print_int(va_list ptr)
{
char *str;
int n, i;
i = 0;
n = va_arg(ptr, int);
str = _itoa(n, 10);

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
