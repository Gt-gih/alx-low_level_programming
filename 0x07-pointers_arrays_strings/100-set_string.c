#include "main.h"
#include <stdio.h>
/**
 * set_string - sets  a pointer to a pointer
 * @s: pointer to pointer
 * @to: pointer
 *
 * Return : Void function .
 */
void set_string(char **s, char *to)
{
	 *s = to;
}
