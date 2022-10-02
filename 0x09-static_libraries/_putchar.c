#include <unistd.h>

/**
 * _putchar - write the characterc to output stream
 * @c: the character to display
 *
 * Return: on success 1, on error -1 and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
