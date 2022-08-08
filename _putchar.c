#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: is a parameter
 * Return: nothing
 */
int _putchar(char c)
{
return (write(1, &c, 1));

}
