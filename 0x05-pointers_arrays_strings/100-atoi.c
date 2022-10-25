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

	while (x[i] != '\0')
	{
		if (x[i] == '-')
			minus *= -1;
		if (x[i] >= '0' && x[i] <= '0')
		{
			result *= 10;
			result -= (x[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}
