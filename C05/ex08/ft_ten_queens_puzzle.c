/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:30:07 by osen              #+#    #+#             */
/*   Updated: 2022/09/11 21:08:59 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 10

void	board_generator(int board[N][N])
{
	int	x;
	int	y;

	x = -1;
	while (++x < N)
	{
		y = -1;
		while (++y < N)
			board[x][y] = 0;
	}
}

void	solution_printer(int board[N][N])
{
	int	x;
	int	y;

	x = -1;
	while (++x < N)
	{
		y = -1;
		while (++y < N)
			if (board[x][y])
				write(1, &"0123456789"[y], 1);
	}
	write(1, "\n", 1);
}

int	board_checker(int board[N][N], int row, int col)
{
	int	x;
	int	y;

	x = -1;
	while (++x < row)
		if (board[x][col] == 1)
			return (0);
	x = row;
	y = col;
	while (x >= 0 && y >= 0)
	{
		if (board[x][y] == 1)
			return (0);
		x--;
		y--;
	}
	while (row >= 0 && col < N)
	{
		if (board[row][col] == 1)
			return (0);
		row--;
		col++;
	}
	return (1);
}

int	queen_solver(int board[N][N], int row, int *solve)
{
	int	x;

	x = 0;
	if (row == N)
		return (1);
	while (x < N)
	{
		if (board_checker(board, row, x))
		{
			board[row][x] = 1;
			if (queen_solver(board, row + 1, solve))
			{
				*solve += 1;
				solution_printer(board);
			}
			board[row][x] = 0;
		}
		x++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[N][N];
	int	solve;

	solve = 0;
	board_generator(board);
	queen_solver(board, 0, &solve);
	return (solve);
}

int	main(void)
{
	ft_ten_queens_puzzle();
}
