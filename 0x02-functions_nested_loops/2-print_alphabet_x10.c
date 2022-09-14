#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * return: always success
 *
 */
void print_alphabet_x10(void)
{

int co;
char c;
co = 0;

while (co < 10)
{

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

co++;

_putchar('\n');
}

}
