#include "main.h"
/**
* _abs - function to determine the absolute value of given number
*
* @n:value to be converted to absolute
* Return: int to indicate success
*/
int _abs(int n)
{
	int tmp;

	if (n < 0)
		tmp = -1 * n;
	else
		tmp = n;
	return (tmp);
}
