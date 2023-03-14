#include "main.h"
/**
 * _strlen_recursion - function to return the length of a string
 * @s: string
 *
 * Return: length of string s
*/
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
