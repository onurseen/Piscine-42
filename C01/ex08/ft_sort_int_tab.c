void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int k;
	int temp;

	i = 0;
	while(i < size)
	{
		k = 0;
		while (k < size - 1)
		{
			if (tab[k] < tab[k + 1])
			{
				ft_swap(&tab[k], &tab[k + 1]);
			}
			k++;
		}
		i++;
	}
}