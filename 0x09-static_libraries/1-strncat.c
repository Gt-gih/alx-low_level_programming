#include "main.h"

/**
 * _strncat - function to concatnet n no of chars
 *@dest: 1st char
 *@src: 2nd char
 *@n: int no of chars
 *Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';

	return (dest);
}
