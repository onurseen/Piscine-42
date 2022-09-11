#include <unistd.h>
#define N 4

void board_generator(int board[N][N])
{
	int x;
	int y;

	x = -1;
	while (++x < N)
	{
		y = -1;
		while (++y < N)
			board[x][y] = 0;
	}
}
int board_checker(int board[N][N], int row, int col)
{
	int x;
	int y;

	x = 0;
	while (x < row)
		if (board[x++][col])
			return (0);
	x = row;
	y = col;
	while (x-- >= 0 && y-- >= 0)
		if (board[x][y])
			return (0);
	x = row;
	y = col;
	while (x-- >= 0 && y++ < N)
		if (board[x][y])
			return (0);
	return (1);
}

void solution_printer(int mat[N][N])
{
	int x;
	int y;

	x = -1;
	while (++x < N)
	{
		y = -1;
		while (++y < N)
			write(1, &"0123456789"[y], 1);
	}
	write(1, "\n", 1);
}

int queen_solver(int board[N][N], int row, int *result)
{
	int x;

	x = 0;
	if (row >= N)
		return (1);
	while (x++ < N)
	{
		if (board_checker(board, row, x))
		{
			board[row][x] = 1;
			if (queen_solver(board, row + 1, result))
			{
				*result += 1;
				solution_printer(board);
			}
			board[row][x] = 0;
		}
	}
	return (0);
}	

int main()
{

	int board[N][N];
	int res;
	res = 0;
	board_generator(board);
	queen_solver(board, 0, &res);

	return 0;
}