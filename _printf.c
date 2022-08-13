#include "main.h"
#include <string.h>
int _printf(const char *format, ...);

/**
 * spec_printer- hendles % printing
 * @format: pointer to the last named pramater
 * @ptr: pointer to first optional paramater
 * @x:pointer to the format lenght
 * Return: the lenght of the format specifier
 */

static int spec_printer(const char *format, va_list ptr, int *x)
{
int n;
int spec_len;
spec_controller controller[] = {
{'s', print_str},
{'c', print_c},
{'i', print_int},
{'d', print_int},
{'b', print_binary}
};
*x = *x + 1;
if (format[*x] == '%')
{
_putchar('%');
return (1);
}
if (format[*x] == '\0')
{
return (-1);
}
for (n = 0; n < 5 ; n++)
{
if (format[*x] == controller[n].c)
{
spec_len = controller[n].f_ptr(ptr);

return (spec_len);
}

}
_putchar('%');
_putchar(format[*x]);
return (2);
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
return (format_len);
}
va_end(ptr);
return (-1);
}
