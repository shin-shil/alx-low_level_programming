#include "main.h"
/**
 * main - program entry point.
 * Return: Always 0. 
 */ 
void print_alphabet(void)
{
	char count;
	
	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
