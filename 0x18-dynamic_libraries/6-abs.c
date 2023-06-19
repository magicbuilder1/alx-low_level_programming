#include "main.h"

/**
 * _abs - computer the absolute value of an integer
 * @c: the number to be computed
 * Return: Absolute value of number of c
 */

int _abs(int c)
{
if (c < 0)
{
int _abs_val;
_abs_val = c * -1;
return (_abs_val);
}
return (c);
}
