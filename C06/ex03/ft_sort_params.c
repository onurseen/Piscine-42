/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:08:15 by osen              #+#    #+#             */
/*   Updated: 2022/09/13 17:08:16 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_cswap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;

	x = 0;
	while (s1[x] == s2[x] && (s1[x] || s2[x]))
		x++;
	return (s1[x] - s2[x]);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	y = 0;
	while (++y < ac - 1)
	{
		x = 0;
		while (++x < ac - 1)
		{
			if (ft_strcmp(av[x], av[x + 1]) > 0)
				ft_cswap(&av[x], &av[x + 1]);
		}
	}
	x = 0;
	while (++x < ac)
	{
		ft_putstr(av[x]);
		write(1, "\n", 1);
	}
}
