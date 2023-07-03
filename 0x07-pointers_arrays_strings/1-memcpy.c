#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: stored memory
 *@src: copied memory
 *@n: number of bytes
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
