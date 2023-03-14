#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string to be copied
 * Return: copy of the string passed.
*/
char *_strdup(char *str)
{
	char *rtS;

	if (str == NULL)
	{
		rtS = NULL;
	} else
	{
		int size = strlen(str);
		char *s = malloc(size + 1);
		int i;

		if (s != NULL)
		{
			for (i = 0; i < size; i++)
			{
				s[i] = str[i];
			}
		}
		rtS = s;
	}
	return (rtS);
}
