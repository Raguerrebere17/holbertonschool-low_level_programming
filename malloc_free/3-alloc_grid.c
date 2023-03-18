#include "main.h"
#include <stdlib.h>

int
**alloc_grid(int width, int height)
{
	int i = 0;
	int a = 0;
	int **x;

	if (width < 1 || height < 1)
		return (NULL);
	x = (int **)malloc(height * sizeof(int *));
	if (x == NULL)
		return (NULL);
	while (i < height)
	{
		x[i] = (int *)malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			while (i >= 0)
			{
				free(x[i]);
				i--;
			}
			free(x);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		for (a = 0; a < width; a++)
			x[i][a] = 0;
		i++;
	}
	return (x);
}
