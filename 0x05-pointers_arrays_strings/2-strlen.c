#include "main.h"

/**
 * _strlen - Returns string length.
 * @str: string param.
 *
 * Return: length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
