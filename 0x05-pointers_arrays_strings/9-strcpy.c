#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by SPC
 * @dest: copy to
 * @SPC:copy from
 * Return: string
 */
char *_stricpy(char *dest, char *SPC)
{
int l = 0;
int x = 0;

while (*(SPC + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = SPC[x];
}
dest[l] = '\0';
return (dest);
}
