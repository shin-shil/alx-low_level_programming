#include "main.h"
/**
 * print_alphabet_x10- Prints 10 times the alphabet, in lowercase
 * 
 * Return: 0 on Success. 
 */

void print_alphabet_x10(void)
{
	char a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
