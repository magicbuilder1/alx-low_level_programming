#include "main.h"

/**
 * print_array - a function that print n element of an array
 * @a: array name
 * @n: is the number of element of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
int j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
