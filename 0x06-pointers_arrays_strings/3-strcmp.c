#include "main.h"
/**
 *_strcmp - function to compare strings
 *@s1:  pointer for first string
 *@s2:  pointer for the second string
 *Return: j-integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
	{
		j = s1[i] - s2[i];
		break;
	}
	}
		return (j);
}
