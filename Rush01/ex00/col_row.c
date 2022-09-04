/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_row.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:27:18 by osen              #+#    #+#             */
/*   Updated: 2022/09/04 18:50:30 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define N 4

int	cold_c(int arr[N][N], int colnum, int size)
{
	int	x;
	int	max;
	int	counter;

	counter = 0;
	x = N - 1;
	max = 0;
	while (x >= 0)
	{
		if (arr[x][colnum] > max)
		{
			counter++;
			max = arr[x][colnum];
		}
		x--;
	}
	if (size == counter)
		return (1);
	return (0);
}

int	colup_c(int arr[N][N], int colnum, int size)
{
	int	x;
	int	max;
	int	counter;

	counter = 0;
	x = 0;
	max = 0;
	while (x < N)
	{
		if (arr[x][colnum] > max)
		{
			counter++;
			max = arr[x][colnum];
		}
		x++;
	}
	if (size == counter)
		return (1);
	return (0);
}

int	rowl_c(int arr[N][N], int rownum, int size)
{
	int	x;
	int	max;
	int	counter;

	counter = 0;
	x = 0;
	max = 0;
	while (x < N)
	{
		if (arr[rownum][x] > max)
		{
			counter++;
			max = arr[x][rownum];
		}
		x++;
	}
	if (size == counter)
		return (1);
	return (0);
}

int	rowr_c(int arr[N][N], int rownum, int size)
{
	int	x;
	int	max;
	int	counter;

	counter = 0;
	x = N - 1;
	max = 0;
	while (x >= 0)
	{
		if (arr[rownum][x] > max)
		{
			counter++;
			max = arr[x][rownum];
		}
		x--;
	}
	if (size == counter)
		return (1);
	return (0);
}
