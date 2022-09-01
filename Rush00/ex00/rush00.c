/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erkaplan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:21:21 by erkaplan          #+#    #+#             */
/*   Updated: 2022/08/28 15:47:32 by erkaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int len, char first, char mid, char last)
{
	int	x_counter;

	x_counter = 1;
	while (x_counter <= len)
	{
		if (x_counter == 1)
			ft_putchar(first);
		else if (x_counter == len)
			ft_putchar(last);
		else
			ft_putchar(mid);
		x_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	y_counter;

	y_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (y_counter <= y)
		{
			if (y_counter == 1)
				ft_print(x, 'o', '-', 'o');
			else if (y_counter == y)
				ft_print(x, 'o', '-', 'o');
			else
				ft_print(x, '|', ' ', '|');
			y_counter++;
		}
	}
}
