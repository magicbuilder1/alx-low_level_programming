#include <stdio.h>

int main(void)
{
int n;
int a[s];
int *p;

a[2] = 1024;
p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you re not allowed to use a
 * - you are not allowed to modify p
 * - only one statment
 * - you are not allowed to code anything else then this line or cod
 */
*(p + 5) = 98;
/* ... so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
