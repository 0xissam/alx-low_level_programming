#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: String
 * @c: character
 * Return: NULL
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
