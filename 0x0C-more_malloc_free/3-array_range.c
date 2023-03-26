#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer to array or NULL for failure.
*/
int *array_range(int min, int max)
{
	int i, j, size = 0;
	int *arr = NULL;

	if (min > max)
		return (NULL);

	j = min;
	while (j <= max)
	{
		size++;
		j++;
	}
	arr = malloc(size * sizeof(int));
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = min;
			min++;
		}
		return (arr);
	}
	free(arr);
	return (NULL);
}
