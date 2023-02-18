#include <stdio.h>
/**
* main - main function entry
*
* Program to print all base 10 digits as char
* Return: int(0)
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(((char) (number + 48)));
	putchar('\n');
	return (0);
}
