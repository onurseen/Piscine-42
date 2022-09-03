#include <unistd.h>
#define N 4

int	checker(int tab[N][N], int position, int num)
{
	int i;
	
	i = -1;
	while (++i < position / N)
		if (tab[i][position % N] == num)
			return (1);
	i = -1;
	while (++i < position % N)
		if (tab[position % N][i] == num)
			return (1);
	return (0);
}

int	up_vertical_check(int tab[N][N], int position, int inp[N*N])
{
	int	i;
	int	max;
	int	counter;

	counter = 0;
	max = 0;
	i = 0;
	if (position / N == N - 1)
	{
		while (i < N)
		{
			if (tab[i][position % N] > max)
			{
				max = tab[i][position % N];
				counter++;
			}
			i++;
		}
		if (inp[position % N] != counter)
			return (1);
	}
	return (0);
}

int	down_vertical_check(int tab[N][N], int position, int inp[N*N])
{
	int	i;
	int	max;
	int	counter;

	i = 4;
	max = 0;
	counter = 0;
	if (position / N == N - 1)
	{
		while (--i >= 0)
		{
			if (tab[i][position % N] > max)
			{
				max = tab[i][position % ];
				counter++;
			}
		}
		if (inp[N+ position % N] != counter)
			return (1);
	}
	return (0);
}

int	right_horizontal_check(int tab[N][N], int position, int inp[N*N])
{
	int	i;
	int	max;
	int	counter;

	i = 4;
	max = 0;
	counter = 0;
	if (position % N == N - 1)
	{
		while (--i >= 0)
		{
			if (tab[position / N][i] > max)
			{
				max = tab[position % N][i];
				counter++;
			}
		}
		if (inp[3*N + position / N] != counter)
			return (1);
	}
	return (0);
}

int	left_horizontal_check(int tab[N][N], int position, int inp[N*N])
{
	int	i;
	int	max;
	int	counter;

	i = -1;
	max = 0;
	counter = 0;
	if (position % N == N-1)
	{
		while (++i < 4)
		{
			if (tab[position / N][i] > max)
			{
				max = tab[position / N][i];
				counter++;
			}
		}
		if (inp[2*N + position / N])
			return (1);
	}
	return (0);
}

int	main_controller(int tab[N][N], int position, int inp[N*N])
{
	if (left_horizontal_check(tab, position, inp) == 1)
		return (1);
	if (right_horizontal_check(tab, position, inp) == 1)
		return (1);
	if (up_vertical_check(tab, position, inp) == 1)
		return (1);
	if (down_vertical_check(tab, position, inp) == 1)
		return (1);
	return (0);
}

int	input_check(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != N*N - 1)
		return (1);
	return (0);
}

int	number_generator(char *str)
{
	int	i;
	int	k;
	int	*tab;

	i = -1;
	k = 0;
	if (!(tab = malloc(sizeof(int) * N*N)))
			return(0);
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
