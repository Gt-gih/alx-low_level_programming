#include"main.h"
/**
 * _strncpy - function that copy string
 * @src: pointer of char for the string
 * @dest: pointer of char to [lace the string
 * @n: integer no of chars to copy
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)

		dest[i] = '\0';


	}
	return (dest);
}
