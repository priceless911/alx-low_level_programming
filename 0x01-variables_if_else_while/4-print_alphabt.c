#include <stdio.h>
/**
* main - main funtion entry
*
* print letters of the alphabet except 'q' & 'e'
* Return: int(0)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
