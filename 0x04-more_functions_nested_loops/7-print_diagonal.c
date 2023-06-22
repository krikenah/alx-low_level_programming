#include "main.h"

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: empty
 */

void print_diagonal(int n)
{
	int x;
	int spaces;

	for (i = 0; i < n; i++)
	{
	for (spaces = 0; spaces < i; spaces++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}

	if (n <= 0)
	{
	_putchar('\n');
	}
}
