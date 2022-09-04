/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:27:28 by osen              #+#    #+#             */
/*   Updated: 2022/09/04 18:28:51 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 4

int		cold_c(int arr[N][N], int colnum, int size);
int		colup_c(int arr[N][N], int colnum, int size);
int		rowl_c(int arr[N][N], int rownum, int size);
int		rowr_c(int arr[N][N], int rownum, int size);
int		c_check(int arr[N][N], char args[N][N]);
int		r_check(int arr[N][N], char args[N][N]);
void	ft_putnb(int a);
void	ft_printer(int arr[N][N]);
int		is_safe(int arr[N][N], int row, int col, int num);
int		sky_solver(int arr[N][N], int row, int col, char args[N][N]);
void	arr_generator(int arr[N][N]);
int		is_number(char a);
int		consecutive_spaces(char *str);
int		consecutive_numbers(char *str);
int		is_valid(char *str);
void	args_generator(char args[N][N], char *in);

int	main(int argc, char **argv)
{
	char	*inp;
	char	args[N][N];
	int		arr[N][N];

	inp = argv[argc - 1];
	arr_generator(arr);
	args_generator(args, inp);
	if (is_valid(inp))
	{
		if (sky_solver(arr, 0, 0, args) == 1)
			ft_printer(arr);
		else
			write(1, "No solution exists", 18);
	}
	else
		write(1, "ERROR", 5);
	return (0);
}
