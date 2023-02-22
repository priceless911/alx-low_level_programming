#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - function to print lowercase alphabets
*
* Return: int(0)
*/
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		putchar(letter);
		}
	putchar('\n');
	}
}
