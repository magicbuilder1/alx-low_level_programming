#include "main.h"


/**
 * print_sign - print the sign of a number
 * @c: the charater to be checked
 * Return: 1 for positive num  0 for nagative num or zero for  anything else
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}