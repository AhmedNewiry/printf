#include "main.h"
void _puts(char *str);
int _printf(const char *format, ...);
/**
 * _puts-prints a string
 * @str: pointer to the first char of the string
 */
void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
}
