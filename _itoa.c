#include "main.h"
/**
 * _itoa - converts from integer to string
 * @num: is the integer to be converted
 * @base: is the base to be converted
 * Return: pointer to the string to be converted
 */
char *_itoa(long int num, int base)
{
static char *array = "0123456789abcdef";
static char buffer[50];
char sign = 0;
char *ptr;
unsigned long n = num;
if (num < 0)
{
n = -num;
sign = '-';
}
ptr = &buffer[49];
*ptr = '\0';
do {
*--ptr = array[n % base];
n /= base;
} while (n != 0);

if (sign)
*--ptr = sign;
return (ptr);
}
