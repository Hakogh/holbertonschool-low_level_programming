#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)

{
char hb[] = "Holberton";
int i = 0;
while (hb[i] != '\0')
{
_putchar(hb[i]);
i++;
}
_putchar('\n');
return (0);
}
