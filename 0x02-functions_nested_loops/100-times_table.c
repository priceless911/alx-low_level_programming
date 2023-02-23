#include "main.h"
/**
* print_times_table -  function that prints the multiplication table of n
*
* @n: varible
* Return: void
*/
void print_times_table(int n)
{
	int i, j, out;
	char str[20];

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				out = i * j;
				sprintf(str, "%d", i * (j + 1));
				printf("%d", out);
				if (j == n)
					continue;
				putchar(',');
				if (strlen(str) == 2)
				{
					printf("  ");
					continue;
				} else if (strlen(str) == 3)
				{
					printf(" ");
					continue;
				}
				printf("   ");
			}
			putchar('\n');
		}
	}
}
