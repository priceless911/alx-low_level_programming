#include "main.h"
#include <stdio.h>
/**
* print_alphabet - function to print lowercase alphabets
*
* Return: int(0)
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
