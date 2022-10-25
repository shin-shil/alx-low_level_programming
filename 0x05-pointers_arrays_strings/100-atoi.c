#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: the converted string
 */
int _atoi(char *s)
{
	short boolean;
	int x, minus, result;

	x = minus = result = boolean = 0;
	minus = -1;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
			minus *= -1;
		if (s[x] >= '0' && s[x] <= '0')
		{
			result *= 10;
			result -= (s[x] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		x++;
	}
	result *= minus;
	return (result);
}
