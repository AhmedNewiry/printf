#include "main.h"
/**
 * string_toupper - change the lowercase characters to uppercase
 * @s: the string to be changed to upper
 * Return: pointer to the changed string
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 'a' - 'A';
i++;

}
return (s);
}
