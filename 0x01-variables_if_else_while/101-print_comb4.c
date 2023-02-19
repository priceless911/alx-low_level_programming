#include <stdio.h>
/**
* main - main function entry
*
* Return: int(0)
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar((char) (i + 48));
				putchar((char) (j + 48));
				putchar((char) (k + 48));
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
