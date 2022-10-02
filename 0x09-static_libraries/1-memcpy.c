#include "main.h"

/**
 * _memcpy - fnction to copy memory value to destination .
 * @dest: param, memory allocation of the destination
 * @src: param for memory content to copy from the src
 * @n: content size in byte to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
