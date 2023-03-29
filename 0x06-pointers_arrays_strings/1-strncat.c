#include "main.h"
/**
 * __strncat - concatenate two strings
 * using at most n bytes from SPC
 * @dest: input value
 * @SPC: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *SPC, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && SPC[j] != '\0')
{
dest[i] = SPC[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
