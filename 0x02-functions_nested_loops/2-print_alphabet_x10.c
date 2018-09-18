#include "holberton.h"

/**
*print_alphabet_x10 - use local functions to create output
*
*Return: prints to stdout the alphabet 10 times, followed by a new line
*/

void print_alphabet_x10(void)

{
int i = 0;
char lph;
for (i = 0; i < 10; i++)
{
for (lph = 'a'; lph <= 'z'; lph++)
{
_putchar(lph);
}
_putchar('\n');
}
}
