#include "main.h"
/**
 * _pow_recursion - Funtion to find the exponent
 * of a given number to a given power.
 * @x: number to be raised to power
 * @y: number of power to raise x
 *
 * Return: exponente of x to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
