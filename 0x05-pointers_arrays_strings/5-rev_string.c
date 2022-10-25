#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: string that has been reversed
 */
void rev_string(char *s)
{
	char rvsd = s[0];
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		x--;
		rvsd = s[y];
		s[y] = s[x];
		s[x] = rvsd;
	}
}
