#include <stdio.h>

/**
 * main - print the sun of even fibonacci number
 * less than 4000000.
 * Return: Nothing
 */

int main(void)
{

int i = 0;
long j = 1, k = 2, sum = l;

while (k + j < 4000000)
{
k += j;
if (k % 2 == 0)
sum += k;
j = k - j;
++i;
}
printf("%ld\n", sum);
return (0);
}
