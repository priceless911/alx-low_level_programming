#include "main.h"
/**
* _islower - Function that checks for lowercase character
*
* @c: int for comparing
* Return: (int c);
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

