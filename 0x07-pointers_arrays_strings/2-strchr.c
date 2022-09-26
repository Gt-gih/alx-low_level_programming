#include "main.h"
#include <stdio.h>
/**
 * _strchr - function to locates a char in a string .
 * @s: string to be checked if the char is available
 * @c: character to be located
 *
 * Return: pointer to s or null
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		s++;

			if (*s == c)
		{
			return (s);
		}


	}

		return (0);


}
