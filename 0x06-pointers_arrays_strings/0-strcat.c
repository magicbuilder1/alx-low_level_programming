#include "main.h"

/**
 * _strcat - conatenates two strings
 * @dest: input valus
 * @SPC: input value
 * Return: void
 */
char *_strcat(char *dest, char *SPC)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (SPC[j] != '\0')
{
dest[i] = SPC[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
