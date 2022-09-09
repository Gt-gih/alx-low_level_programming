#include <stdio.h>
/**
 * main - print the no is pos, neg or zero
 *
 * Description using the main function
 * Return:0
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
if (c != 'e' && c != 'q')
{
	putchar (c);
}
}
putchar ('\n');
return (0);
}
