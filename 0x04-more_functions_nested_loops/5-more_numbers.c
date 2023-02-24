#include "main.h"
/**
* more_numbers - function that prints the numbers, from 0 to 14
*
* Return: void
*/
void more_numbers(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				putchar(i / 10 + '0');

			putchar(i % 10 + '0');
		}
		putchar('\n');
	}
}
