#include "main.h"

/**
 * print_line - function to  printing lines
 * @n: number of times of the lines
 *
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
