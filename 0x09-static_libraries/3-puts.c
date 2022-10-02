#include "main.h"

/**
 * _puts - Prints a string char one by one .
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
