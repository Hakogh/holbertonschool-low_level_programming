#include "holberton.h"

/**
* jack_bauer - Write a function that prints every minute of the day
*
* Return: print every minute from 00:00 to 23:49
*/

void jack_bauer(void)
{
int x, y;
for (x = 0; x < 24; x++)
{
for (y = 0; y < 60; y++)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
_putchar(':');
_putchar(y / 10 + '0');
_putchar(y % 10 + '0');
_putchar('\n');
}
}
}
