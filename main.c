#include <stdio.h>

#include <unistd.h>
#define N 4

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_printer(int arr[N][N])
{
    int x;
    int y;
    
    x = 0;
    while (x < N)
    {
        y = 0;
        while (y < N)
        {
            ft_putchar(arr[x][y] + '0');
            if (y != 3)
                ft_putchar(' ');
            y++;
        }
        ft_putchar('\n');
        x++;
    }
}

int	colup_counter(int arr[N][N], int colnum, int size)
{
	int	i;
	int	max;
	int	counter;

	counter = 0;
	max = 0;
	i = -1;
	while (++i < N)
	{
		if (arr[i][colnum] > max)
		{
			max = arr[i][colnum];
			counter++;
		}
	}
	if (size == counter)
		return (1);
    return (0);
}

int    coldown_counter(int arr[N][N], int colnum, int size)
{
    int    i;
    int    max;
    int    counter;

    counter = 0;
    max = 0;
    i = 4;
    while (--i >= 0)
    {
        if (arr[i][colnum] > max)
        {
            max = arr[i][colnum];
            counter++;
        }
    }
    if (size == counter)
        return (1);
    return (0);
}

int    rowright_counter(int arr[N][N], int rownum, int size)
{
    int    i;
    int    max;
    int    counter;

    counter = 0;
    max = 0;
    i = -1;
    while (++i < N)
    {
        if (arr[rownum][i] > max)
        {
            max = arr[rownum][i];
            counter++;
        }
    }
    if (size == counter)
        return (1);
    return (0);
}

int    rowleft_counter(int arr[N][N], int rownum, int size)
{
    int    i;
    int    max;
    int    counter;

    counter = 0;
    max = 0;
    i = 4;
    while (--i >= 0)
    {
        if (arr[rownum][i] > max)
        {
            max = arr[rownum][i];
            counter++;
        }
    }
    if (size == counter)
        return (1);
    return (0);
}

int is_safe(int arr[N][N], int rownum, int colnum, int size)
{
    int x;

    x = -1;
    while (++x < N)
        if (arr[rownum][x] == size)
            return (0);
    x = -1;
    while (++x < N)
        if (arr[x][colnum] == size)
            return (0);
    return (1);
}

int col_checker(int arr[N][N], char argv[N][N])
{
    int x;
    int col1;
    int col2;
    int flag;
    
    flag = 1;
    x = 0;
    while (x < N)
    {
        col1 = argv[0][x] - '0';
        col2 = argv[1][x] - '0';
        if (flag == 1 && coldown_counter(arr, x, col1) == 1 && coldown_counter(arr, x, col2) == 1)
            flag = 1;
        else
            flag = 0;
        x++;
    }
    return (flag);
}

int row_checker(int arr[N][N], char argv[N][N])
{
    int x;
    int row1;
    int row2;
    int flag;
    
    flag = 1;
    x = 0;
    while (x < N)
    {
        row1 = argv[2][x] - '0';
        row2 = argv[3][x] - '0';
        if (flag == 1 && rowleft_counter(arr, x, row1) == 1 && rowright_counter(arr, x, row2) == 1)
            flag = 1;
        else
            flag = 0;
        x++;
    }
    return (flag);
}

/*int main_checker(int arr[N][N], char argv[N][N])
{
    int x;
    int row1;
    int row2;
    int col1;
    int col2;
    int row_flag;
    int col_flag;
    
    col_flag = 1;
    row_flag = 1;
    col1 = argv[0][x] - '0';
    col2 = argv[1][x] - '0';
    row1 = argv[2][x] - '0';
    row2 = argv[3][x] - '0';
    
    x = -1;
    while (++x < N)
    {
        if (col_flag && row_flag && rowleft_counter(arr, x, row1) && rowright_counter(arr, x, row2))
            if (coldown_counter(arr, x, col1) && colup_counter(arr, x, col2))
                return (1);
    }
    return (0);
}*/

int is_number(char c)
{
    return (c < N + '0' && c > '0');
}

int solver(int arr[N][N], int rownum, int colnum, char argv[N][N])
{
    int x;
    if (colnum == N && rownum == N - 1 && row_checker(arr, argv) == 1 && col_checker(arr, argv) == 1)
        return (1);
    if (colnum == N)
    {
        rownum++;
        colnum = 0;
    }
    if (arr[rownum][colnum] > 0)
        return (solver(arr, rownum, colnum + 1, argv));
    x = 0;
    while (++x <= N)
    {
        if (is_safe(arr, rownum, colnum, x) == 1)
        {
            arr[rownum][colnum] = x;
            if (solver(arr, rownum, colnum + 1, argv) == 1)
                return(1);
        }
        arr[rownum][colnum] = 0;
    }
    return (0);
}

void num_generator(int arr[N][N], int size)
{
    int x;
    int y;
    
    x = 0;
    while (x < N)
    {
        y = 0;
        while (y < N)
        {
            arr[x][y] = 0;
            y++;
        }
        x++;
    }
}

void args_generator(char argv[N][N], char *inp)
{
    int x;
    int y;
    
    x = 0;
    y = 0;
    while (inp[y] != 0)
    {
        if (is_number(inp[y]))
        {
            argv[x / 4][x % 4] = inp[y];
            x++;
        }
        y++;
    }
}

int main(int ac, char **av)
{
    char *inp;
    char argv[N][N];
    int arr[N][N];
    
    inp = av[1];
    num_generator(arr, N);
    args_generator(argv, inp);
    if (solver(arr, 0, 0,  argv) == 1)
        ft_printer(arr);
    else
        write(1, "No Solution", 11);
}
