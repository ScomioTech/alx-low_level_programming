#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be checked
 * Return: return 1 if uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
