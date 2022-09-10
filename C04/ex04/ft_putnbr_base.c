/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 20:22:17 by osen              #+#    #+#             */
/*   Updated: 2022/09/10 19:03:31 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

int	base_checker(char *str)
{
	int	x;
	int	y;
	int	len;

	x = 0;
	len = ft_strlen(str);
	if (str[0] == '\0' || len == 1)
		return (0);
	while (str[x])
	{
		if (str[x] <= 32 || str[x] > 126 || str[x] == 43 || str[x] == 45
			|| (str[x] >= 9 && str[x] <= 13))
			return (0);
		y = x + 1;
		while (y < len)
		{
			if (str[x] == str[y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	num;

	num = nbr;
	len = ft_strlen(base);
	if (base_checker(base) == 1)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		if (num < len)
			ft_putchar(base[num]);
		if (num >= len)
		{
			ft_putnbr_base(num / len, base);
			ft_putnbr_base(num % len, base);
		}
	}
}
