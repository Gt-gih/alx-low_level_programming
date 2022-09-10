#include <stdio.h>
/**
 * main - print the no is pos, neg or zero
 *
 * Description using the main function
 * Return:0
 */
int main(void)
{
	int i;
	for (i = 48 ; i <= 57 ; i++)
	{
		putchar (i);
		if (i != 57)
		{
			putchar (',');
			putchar (' ');
		}

	}
	putchar ('\n');
	return (0);
}

