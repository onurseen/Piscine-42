/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:47:59 by osen              #+#    #+#             */
/*   Updated: 2022/08/27 16:20:56 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, char a, char b)
{
	int	p_counter;

	p_counter = 0;
	while (p_counter < x)
	{
		if (p_counter == 0 || p_counter + 1 == x)
			ft_putchar(a);
		else
			ft_putchar(b);
			p_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter;

	counter = 0;
	while (counter < y)
	{
		if (counter == 0 || counter + 1 == y)
			ft_print(x, 'o', '-');
		else if (counter != y)
			ft_print(x, '|', ' ');
		counter++;
	}
}
