#include "main.h"
/**
* print_line - prints straight line n times.
*@n: number of times '_' is printed.
* Return: void
*/
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
