#include "main.h"
/**
 * main-program entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int string1[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int counter, size;

	size = sizeof(string1) / sizeof(int);
	for (counter = 0; counter < size; counter++)
	{
		_putchar(string1[counter]);
	}
	_putchar('\n');
	return (0);
}
