#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @SPC: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *SPC, int n)
{
int j;

j = 0;
while (j < n && SPC[j] != '\0')
{
dest[j] = SPC[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
