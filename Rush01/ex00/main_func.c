/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainhelpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:27:37 by osen              #+#    #+#             */
/*   Updated: 2022/09/04 18:28:20 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 4

int	r_check(int arr[N][N], char args[N][N]);
int	c_check(int arr[N][N], char args[N][N]);
int	is_safe(int arr[N][N], int row, int col, int num);
int	is_number(char a);

void	ft_putnb(int a)
{
	write(1, &a, 1);
}

void	ft_printer(int arr[N][N])
{
	int	x;
	int	y;

	x = -1;
	while (++x < N)
	{
		y = -1;
		while (++y < N)
		{
			ft_putnb(arr[x][y] + '0');
			if (y != N - 1)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int	sky_solver(int arr[N][N], int row, int col, char args[N][N])
{
	int	num;

	if (row == N - 1 && col == N && r_check(arr, args) && c_check(arr, args))
		return (1);
	if (col == N)
	{
		row++;
		col = 0;
	}
	if (arr[row][col] > 0)
		return (sky_solver(arr, row, col + 1, args));
	num = 0;
	while (++num <= N)
	{
		if (is_safe(arr, row, col, num) == 1)
		{
			arr[row][col] = num;
			if (sky_solver(arr, row, col + 1, args) == 1)
				return (1);
		}
		arr[row][col] = 0;
	}
	return (0);
}

void	arr_generator(int arr[N][N])
{
	int	x;
	int	y;

	x = -1;
	while (++x < N)
	{
		y = -1;
		while (++y < N)
		{
			arr[x][y] = 0;
		}
	}
}

void	args_generator(char args[N][N], char *inp)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (inp[y] != 0)
	{
		if (is_number(inp[y]))
		{
			args[x / 4][x % 4] = inp[y];
			x++;
		}
		y++;
	}
}
