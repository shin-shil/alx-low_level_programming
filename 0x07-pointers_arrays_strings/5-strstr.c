#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: a pointer if substring located
 * and null if it isnt
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
				{
					return (haystack);
				}

				index++;
			}
			while{
				haystack[index] == needle[index];
			}
		}
		haystack++
	}
	return ('\0')
}
