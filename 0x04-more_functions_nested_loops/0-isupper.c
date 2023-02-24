#include "main.h"

/**
* _isupper - function to test if char c is uppercase
*
* @c: varivale to be tested
* Return: int 0 for NO, 1 for yes
*/
int _isupper(int c)
{

	return ((c > 64 && c < 91) ? 1 : 0);
}
