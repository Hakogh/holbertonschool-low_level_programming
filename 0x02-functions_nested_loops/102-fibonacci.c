#include<stdio.h>

/**
* main - program to print fibonacci sequence (first 50)
* Return: 0
*/

int main(void)
{
int count = 2;
long int a = 1, b = 2;
long int k;
printf("%lu, ", a);
while (count <= 50)
{
if (count == 50)
{
printf("%lu\n", 2);
}
else
{
printf("%lu, ", b);
}
k = b;
b += a;
a = k;
count++;
}
return (0);
}
