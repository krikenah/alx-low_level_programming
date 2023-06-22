#include "main.h"

/**
*print_triangle - Prints a triangle of squares according parameter
*@size: The size of the square triangle
*Return: empty 
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	return;
	}
	int i, j;
	for (i = 0; i < size; i++)
	{
	for (j = 0; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
