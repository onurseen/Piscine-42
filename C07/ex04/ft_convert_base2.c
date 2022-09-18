/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:32:26 by osen              #+#    #+#             */
/*   Updated: 2022/09/18 14:48:38 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int	len_num(int num, char *base)
{
	int		x;
	int		len;
	long	nb;

	nb = num;
	len = ft_strlen(base);
	x = 0;
	if (nb < 0)
	{
		nb *= -1;
		x++;
	}
	while (nb >= len)
	{
		nb /= len;
		x++;
	}
	return (x++);
}

void	ft_putnbr_base(int nbr, char *base, char *arr_num)
{
	int		len;
	long	num;
	int		num_len;
	int		check;

	num_len = len_num(nbr, base);
	len = ft_strlen(base);
	num = nbr;
	if (base_checker(base) == 1)
	{
		check = 0;
		if (num < 0)
		{
			arr_num[0] = '-';
			num *= -1;
			check = 1;
		}
		while (num >= len)
		{
			arr_num[num_len--] = base[num % len];
			num /= len;
		}	
		if (num < len)
			arr_num[check] = base[num];
	}
}
