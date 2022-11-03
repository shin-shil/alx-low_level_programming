#include "main.h"

/**
 * factorial - finding factorial of entered number
 * @n: Number entered
 * Return: Factorial calculated
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
