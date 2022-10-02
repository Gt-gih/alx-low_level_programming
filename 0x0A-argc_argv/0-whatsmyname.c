#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to accept my name is arguments
 *
 * @argc: amount of args
 * @argv: pointer to pointers array
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
