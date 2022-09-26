#include "holberton.h"

/**
 * _memset - handles memory with a constant value.
 * @s: var to allocated memory - array of chars.
 * @b: var of char bytes.
 * @n: number of spaces to be filld .
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
