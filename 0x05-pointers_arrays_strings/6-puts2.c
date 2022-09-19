#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
