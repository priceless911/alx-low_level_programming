#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: amount of memory to be allocated
 * Return: void.
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	if (b < 1)
		exit(98);

	s = malloc(b);
	if (s != NULL)
	{
		return (s);
	}
	exit(98);
}
