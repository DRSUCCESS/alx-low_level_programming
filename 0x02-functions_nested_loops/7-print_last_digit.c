#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * Return: m
 * @n: parameter of the function
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
		m = -m;

	_putchar(m + '0');

	return (m);

}
