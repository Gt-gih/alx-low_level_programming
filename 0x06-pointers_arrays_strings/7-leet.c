#include "main.h"
/**
 * leet - a function that encodes a string into.
 * @str: string to be crypted to.
 * Return: pointer to string .
 *
 */

char *leet(char *str)
{
	int inx1 = 0, inx2;
	char x[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[inx1])
	{
		for (inx2 = 0; inx2 <= 7; inx2++)
		{
			if (str[inx1] == x[inx2] || x[inx1] - 32 == x[inx2])
				str[inx1] = inx2 + '0';
		}

		inx1++;
	}

	return (str);
}
