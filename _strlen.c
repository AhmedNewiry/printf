#include "main.h"
/**
 * _strlen- a function that finds string length
 * @s: the pointer to the string
 * Return: the string length
 */

int _strlen(const char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}
