#include "main.h"

/**
 * _islower - function that checks lowercase
 * @c: parameter to be check
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
