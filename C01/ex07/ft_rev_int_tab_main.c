#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

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
	int numbers[9];
	int *first_pointer;
	int index;

	index = 0;
	while (index < 9)
	{
		numbers[index] = index + 1;
		index++;
	}
	first_pointer = &numbers[0];
	printf("before: ");
	counter(numbers, 9);
	ft_rev_int_tab(first_pointer, 9);
	printf("\nafter: ");
	counter(numbers, 9);
}
