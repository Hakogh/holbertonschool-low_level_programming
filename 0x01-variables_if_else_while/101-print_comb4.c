#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/

int main(void)
{
int main(void)
{
int i, j, k;
i = '0';
j = i + 1;
k = j + 1;
while (i <= '7')
{
while (j <= '8')
{
while (k <= '9')
{
putchar(i);
putchar(j);
putchar(k);
if (i != '7' || j != '8' || k != '9')
{
putchar(44);
putchar(32);
}
k++;
}
j++;
k = j + 1;
}
i++;
j = i + 1;
k = j + 1;
}
putchar('\n');
return (0);
}
