#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * Return: 1 or 0 success/fail
 * @c: function parameter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
