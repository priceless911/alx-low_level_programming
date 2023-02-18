#include <stdio.h>
/**
* main - main function entry
*
* Program to print all base 10 digits
* Return: int(0)
*/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}
