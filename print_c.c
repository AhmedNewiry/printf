#include "main.h"
/**
 * print_c - prints a character
 * @ch: is a parameter
 * Return: (1) if success and (-1) if not
 */
int print_c(va_list ch)
{
int rx;
rx = va_arg(ch, int);
if (rx)
{
_putchar(rx);
return (1);
}
return (-1);
}
