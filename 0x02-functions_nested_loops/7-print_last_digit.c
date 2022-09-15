#include "main.h"
/**
 * print_last_digit- Entry point
 * @n: init parameter
 * Return:0
 *
 */
int print_last_digit(int)
{
	int last_d = n % 10;

        if (last_d < 0)
		last_d *= -1;

	_putchar(last_d + '0')
        
        return (last_d);
}
