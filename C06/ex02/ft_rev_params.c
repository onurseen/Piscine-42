/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:26:38 by osen              #+#    #+#             */
/*   Updated: 2022/09/13 16:26:39 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int	x;

	x = 0;
	while (++x < ac)
	{
		ft_putstr(av[ac - x]);
		write(1, "\n", 1);
	}
}
