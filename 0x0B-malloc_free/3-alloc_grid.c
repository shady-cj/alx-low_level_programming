#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer to a
 * 2-dimensional array of integers
 * @width: The width of the 2 dimensional array/matrix
 * @height: The height of the 2 dimensional array/matrix
 * Return: A pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **arr_o;
	int *arr_i;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr_o = malloc(height * sizeof(int *));
	if (arr_o == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_i = malloc(width * sizeof(int));
		if (arr_i == NULL)
		{
			free(arr_i);
			i--;
			while (i >= 0)
			{
				free(arr_o[i]);
				i--;
			}
			free(arr_o);
			return (NULL);
		}
		arr_o[i] = arr_i;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr_o[i][j] = 0;
		}
	}
	return (arr_o);
}
