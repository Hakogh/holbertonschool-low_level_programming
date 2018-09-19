#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers.
*
* Return: Always 0.
*/

int main(void)

{
int i=0, n=98;
unsigned long int sum1 = 1, sum2 = 1, nextTerm=1;
for (i = 0; i < n; i++)
{
printf("%lu, ", nextTerm);
sum1 = sum2;
sum2 = nextTerm;
nextTerm = sum1 + sum2;
}
printf("\n");
return (0);
}
