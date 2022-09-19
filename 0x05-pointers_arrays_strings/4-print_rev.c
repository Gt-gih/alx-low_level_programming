#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse order.
 * @s: param for the string to be reserved.
 * return; nothing to return
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
