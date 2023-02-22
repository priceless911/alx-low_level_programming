#include "main.h"
/**
* _isalpha - function to check it char is an alphabet
*
* @c: var for comparing
* Return: int(1) for yes and 0 for no;
*/
int _isalpha(int c)
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
