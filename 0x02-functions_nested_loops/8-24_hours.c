#include <stdio.h>
/**
* main - main funtion entry
*
* print all base 16 digit in lowercase
* Return: int(0)
*/
int main(void)
{
	char letter;
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((char) (number + 48));
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
