#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers.
*
* Return: Always 0.
*/

int main(void)

{    
int i, sum1 = 1, sum2 = 2, nextTerm;
for (i = 1; i <= 98; ++i)
{
printf("%d, ", sum1);
nextTerm = sum1 + sum2;
sum1 = sum2;
sum2 = nextTerm;
}
return 0;
}
