#include "main.h"
#include <stdio.h>

/**
 * _strspn - function to get the length of a prefix substring.
 * @s: param that holds a char to print
 * @accept: param for char
 *
 * Return: always 0 on success
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				break;
			count++;
			accept++;

			s++;
		}
		
		if (*accept == '\0')
			break;
	
	}
	return (count + 1);

}
