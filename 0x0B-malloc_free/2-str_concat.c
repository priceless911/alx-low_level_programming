#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: string to be concatinated to @s2
 * @s2: string to be concatinated to @s1
 * Return: concartenated s1 and s2.
*/
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL && s2 != NULL)
	{
		int size = strlen(s1) + strlen(s2) + 1;
		char *s3 = malloc(size);
		int i, j, s;

		if (s3 != NULL)
		{
			j = strlen(s1);
			for (i = 0; i < j; i++)
			{
				s3[i] = s1[i];
			}
			s = strlen(s2);
			for (i = 0; i <= s; i++)
			{
				s3[j + i] = s2[i];
			}
			return (s3);
		}
		return (NULL);
	}
	return (NULL);
}
