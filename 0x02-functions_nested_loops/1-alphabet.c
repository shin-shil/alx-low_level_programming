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
		putchar(count);
	}
	putchar('\n');
}
