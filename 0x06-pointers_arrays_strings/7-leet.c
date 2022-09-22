#include "main.h"
/**
 *leet - a function that encodes a string into.
 *@s: string to be crypted to.
 *Return: pointer to string .
 *Update V 1.0 : In the new code , two arrays are changed with  2 pointers, that
 *are pointed to the BASS adresses of the arrays.
 *in addition to that ,a pointer p is assigned to s.
 */

char *leet(char *s)
{
	char *m = "aeotl";
	char *M = "AEOTL";
	int x[] = {'4', '3', '0', '7', '1'};
	int i;
	char *p = s;

	while (*s != '\0')
	{

	for (i = 0; i < 5; i++)
	{
		if (*s == *(m + i) || *s == *(M + i))

			*s = x[i];
	}
		s++;

	}
		return (p);
}
