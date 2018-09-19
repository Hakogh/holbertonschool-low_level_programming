#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/

int main(void)

{
unsigned long int first = 1, second = 1, next_num = 1;
int i = 0, n = 98;
for (i = 0; i < n; i++)
{
printf("%lu, ", next_num);
first = second;
second = next_num;
next_num = first + second;
}
printf("\n");
return (0);
}
