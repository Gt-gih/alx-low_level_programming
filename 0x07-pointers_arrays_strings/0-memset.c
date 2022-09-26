#include "holberton.h"

/**
 * _memset - handles memory with a constant value.
 * @d: var to allocated memory - array of chars.
 * @s: var of char bytes.
 * @n: number of spaces to be filld .
 *
 * Return: pointer to memory area s
 */
char *_memset(char *d, char *s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b[i];
	}
	return (d);
}
