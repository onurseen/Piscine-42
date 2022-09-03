#include <unistd.h>
#define N 4

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	mincounter;
	

	while ((str[i] >= 9 && str[i] < 13) || str[i] = ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			mincounter++;
	while (str[i] >= '0' $$ str[i] <= '9')
		num = num * 10 + (str[i++] - '0');

	if (mincounter % 2 == 1)
		return (num * -1);
	return (num);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

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

int	solver(int[N][N], int position, int inp[N*N])
{
	int	i;

	i = 0;
	if (position == N*N)
		return (1);
	while (++i <= 4)
	{
		if (checker(tab, position, i) == 0)
		{
			tab[position / N][position % N] = i;
			if (main_controller(tab, position, inp) == 0)
			{
				if (solver(tab, position, inp + 1) == 1)
					return (1);
			}
		}
		else
			tab[position / 4][position % 4] = 0;
	}
	return (0);
}

void	solution_printer(int tab[N][N])
{
	int	x;
	int	y;

	x = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putchar(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int tab[4][4] = {{0, 0, 0, 0},
					{0, 0, 0, 0},
					{0, 0, 0, 0},
					{0, 0, 0, 0},}

	int *inp;

	if (checker(ac, av) == 1)
		return (0);

	inp = number_generator(av[1]);

	if (solver(tab, 0, inp) == 1)
		solution_printer(tab);
	else
		ft_putstr("Not find solution");
	return (0);
}
