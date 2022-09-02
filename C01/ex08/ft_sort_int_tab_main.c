#include <stdio.h>
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

void	counter(int arr[], int size)
{
	int	i;
	int temp;

	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		printf(" ");
		i++;
	}
}

int		main(void)
{
	int numbers[9] = {3, 7, 9, 13, 2, 8, 6, 3, 3};

	printf("before: ");
	counter(numbers, 9);
	ft_sort_int_tab(numbers, 9);
	printf("\nafter: ");
	counter(numbers, 9);

	int k;
	scanf("%d", &k);
}