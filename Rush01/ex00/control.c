/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allchecks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:27:04 by osen              #+#    #+#             */
/*   Updated: 2022/09/04 18:27:05 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int	cold_c(int arr[N][N], int colnum, int size);
int	colup_c(int arr[N][N], int colnum, int size);
int	rowl_c(int arr[N][N], int rownum, int size);
int	rowr_c(int arr[N][N], int rownum, int size);
int	is_number(char a);

int	r_check(int arr[N][N], char args[N][N])
{
	int	x;
	int	flag;
	int	row_r;
	int	row_l;
	int	dummy;

	x = 0;
	flag = 1;
	while (x < N)
	{
		row_l = args[2][x] - '0';
		row_r = args[3][x] - '0';
		dummy = (rowr_c(arr, x, row_r) && rowl_c(arr, x, row_l));
		flag = (flag && dummy);
		x++;
	}
	return (flag);
}

int	c_check(int arr[N][N], char args[N][N])
{
	int	x;
	int	flag;
	int	c_u;
	int	c_d;
	int	dummy;

	x = 0;
	flag = 1;
	while (x < N)
	{
		c_u = args[0][x] - '0';
		c_d = args[1][x] - '0';
		dummy = (colup_c(arr, x, c_u) && cold_c(arr, x, c_d));
		flag = (flag && dummy);
		x++;
	}
	return (flag);
}

int	is_safe(int arr[N][N], int row, int col, int num)
{
	int	x;

	x = -1;
	while (++x < N)
	{
		if (arr[row][x] == num)
			return (0);
	}
	x = -1;
	while (++x < N)
	{
		if (arr[x][col] == num)
			return (0);
	}
	return (1);
}
