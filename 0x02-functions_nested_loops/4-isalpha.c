#include"main.h"

/**
 *_isalpha - check for upper case character
 *@c: character to check
 *Return: 1 if letter,lower or upper otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
