#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be halved
 */
void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	str -= (length / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
