#include "main.h"

/**
 * puts2 - Prints every other character of a string then a new line
 * @str : The string
 */
void puts2(char *str)
{
	int x = 0;

	for (; str[x] != '\0'; x++)
	{
		if ((x % 2) == 0)
		{
			_putchar(str[x]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
