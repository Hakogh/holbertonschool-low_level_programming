#include <stdio.h>
#include <math.h>



int main(void)
{
long int num = 612852475143;
int large = 0;
int i;

for (i = 2 ; num != 1; ++i)
{
while (num % i == 0)
{
num /= i;
large = i;
}
}
printf("%d\n", large);
return (0);
}
