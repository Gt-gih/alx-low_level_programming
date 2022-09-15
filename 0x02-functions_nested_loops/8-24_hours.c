#include "main.h"
/**
 * jack_bauer- Entry point
 * Descriptiomn init parameter
 * Return:0
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h_rm = 0;
	int m_rm = 0;

	while (h <= 23)
	{
	while (m <= 59)
	{
	h_rm = h % 10;
	_putchar(h / 10 + '0');
	_putchar(h_rm + '0');
	_putchar(':');
        _putchar(m / 10 + '0');
	_putchar(m_rm + '0');
        m++;
	_putchar('\n');
	}
	h++;
	m = 0;
	}
}

