#include "main.h"
#include <stdio.h>
/**
 * main - function to accept my name is arguments
 * Return: 0
 * @argc: amount of args
 * @argv: pointer to pointers array
 */
int main(int argc, char *argv[])
{

	int c = 0;

	while (c < argc)
	{
		if (c == 0)
		{
			printf("%s\n", argv[c]);
			break;
		}
	}
	return (0);
}
