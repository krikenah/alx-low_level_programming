#include "main.h"

/**
 * string_toupper - changes all lowercase latters
 * of a string to uppercase.
 * @str: the string
 * Return: pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
