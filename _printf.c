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
/**
 * _printf- a function that produces output according to a format.
 * @format: the last named param
 * Return: int if sucess
 */
int _printf(const char *format, ...)
{
char *str;
int x;
int y = 0;

va_list ptr;

va_start(ptr, format);
while (format[y] != '\0')
{
if (format[y] == '%')
{

switch (format[y + 1])
{
case 'c':
	x = va_arg(ptr, int);
	_putchar(x);
	y++;
	break;
case 's':
	str = va_arg(ptr, char*);
	_puts(str);
	y++;
	break;
}
}
else
{

_putchar(format[y]);

}
y++;
}
va_end(ptr);

_putchar('\n');
return (y);
}
/**
 * _printf- a function that produces output according to a format.
 * @format: the last named param
 * Return: int if sucess
 */

int _printf(const char *format, ...)
{
int x, spec_len, format_len = 0;
va_list ptr;
va_start(ptr, format);
if (format != NULL)
{
if (_strlen(format) == 0)
{
va_end(ptr);
return (0);
}
for (x = 0; format[x] != '\0'; x++)
{
if (format[x] == '%')
{
spec_len = spec_printer(format, ptr, &x);
if (spec_len ==  -1)
{
va_end(ptr);
return (-1);
}
format_len += spec_len;
}
else
{
_putchar(format[x]);
}
format_len++;
}
va_end(ptr);
_putchar('\n');
return (format_len);
}
va_end(ptr);
return (-1);
}
