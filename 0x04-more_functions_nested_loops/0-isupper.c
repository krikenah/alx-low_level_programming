#include "main.h"
#include <stdio.h>

/**
* _isupper - Check if paramter c represents an uppercase letter.
* @c: Int representing a character
* Return: 1 for upper letter or 0 for any else
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
