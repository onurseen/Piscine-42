/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:30:07 by osen              #+#    #+#             */
/*   Updated: 2022/09/13 16:47:45 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	board_generator(int board[10][10])
{
	int	x;
	int	y;

	x = -1;
	while (++x < 10)
	{
		y = -1;
		while (++y < 10)
			board[x][y] = 0;
	}
}

void	solution_printer(int board[10][10])
{
	int	x;
	int	y;

	x = -1;
	while (++x < 10)
	{
		y = -1;
		while (++y < 10)
			if (board[x][y])
				write(1, &"0123456789"[y], 1);
	}
	write(1, "\n", 1);
}

int	board_checker(int board[10][10], int row, int col)
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
	while (row >= 0 && col < 10)
	{
		if (board[row][col] == 1)
			return (0);
		row--;
		col++;
	}
	return (1);
}

int	queen_solver(int board[10][10], int row, int *solve)
{
	int	x;

	x = 0;
	if (row == 10)
		return (1);
	while (x < 10)
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
	int	board[10][10];
	int	solve;

	solve = 0;
	board_generator(board);
	queen_solver(board, 0, &solve);
	return (solve);
}
