#include <unistd.h>

/**
 * _putchar - Writs character to stdout
 * @c: char to be printed
 * Return: 1 on sueccess
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
