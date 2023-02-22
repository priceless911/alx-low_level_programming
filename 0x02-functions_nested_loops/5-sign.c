#include "main.h"
/**
* print_sign - function to check it char is an alphabet
*
* @n: var for comparing
* Return: int(1)
*/
int print_sign(int n)
{
	int rtval;

	if (n > 0)
	{
		_putchar('+');
		rtval = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		rtval = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		rtval = -1;
	}
	return (rtval);
}
