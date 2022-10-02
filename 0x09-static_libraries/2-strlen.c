#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns string length.
 * @str: string param.
 *
 * Return: length.
 */
int _strlen(char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
