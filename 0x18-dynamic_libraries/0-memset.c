#include "main.h"
/**
 * _memset - fill block of memset with a specific value
 * @s: starting addres of memset to be filled
 * @b: the desired value
 * @n: number of bytes to be change
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
