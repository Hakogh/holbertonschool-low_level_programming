#include <stdio.h>

/**
* main - 103-fibonacci.c finds and prints the sum of even terms:w
*
* Return: Always 0.
*/

int main(void)

{
  int a = 1, b = 2, sum = 0;
  int c;
  while (b < 4000000)
    {
      if (b % 2 == 0)
	sum += b;
      c = b;
      b += a;
      a = c;
    }
  printf("%d\n", sum);
  return (0);
}
