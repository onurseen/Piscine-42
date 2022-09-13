#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int *tab;
	int x;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tab = (int *)(malloc(sizeof(int) * size));
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	x = -1;
	while (++x < size)
		tab[x] = min + x;
	return (size);
}
