#include "main.h"

/**
* main - Prints a Frizz Buzz program 
* Return: Always 0 (Success)
*/

int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
		printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
