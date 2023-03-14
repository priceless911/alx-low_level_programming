#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 *  to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to a 2 dimensional
 *  array of integers or NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int i, j;

	if (width > 0 && height > 0)
	{
		int **arr = malloc(height * sizeof(int *));

		if (arr != NULL)
		{
			for (i = 0; i < height; i++)
			{
				arr[i] = malloc(width * sizeof(int));
				if (arr[i] == NULL)
				{
					if (i > 0)
					{
					for (j = 0; j <= i; j++)
					{
						free(arr[j]);
					}
					}
					free(arr);
					return (NULL);
				}
			}
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					arr[i][j] = 0;
				}
			}
			if (arr != NULL)
				return (arr);
		} else
		{
			free(arr);
			return (NULL);
		}
	}
	return (NULL);
}
