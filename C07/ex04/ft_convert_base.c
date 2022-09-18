/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:32:19 by osen              #+#    #+#             */
/*   Updated: 2022/09/18 14:48:22 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		len_num(int num, char *base);
char	*ft_putnbr_base(int nbr, char *base, char *arr_num);
int		ft_strlen(char *str);
int		base_checker(char *str);

int	ft_index(char *str, char c)
{
	int	x;

	x = 0;
	while (str[x] && str[x] != c)
		x++;
	return (x);
}

int	is_negative(char *str, int *x)
{
	int	min_checker;

	min_checker = 1;
	while ((str[*x] >= 9 && str[*x] <= 13) || str[*x] == 32)
		*x += 1;
	while (str[*x] == '+' || str[*x] == '-')
	{
		if (str[*x] == '-')
			min_checker *= -1;
		*x += 1;
	}
	return (min_checker);
}

int	ft_atoi_base(char *str, char *base)
{
	int	x;
	int	min_checker;
	int	len;
	int	num;

	len = ft_strlen(base);
	x = 0;
	num = 0;
	min_checker = is_negative(str, &x);
	if (base_checker(base))
	{
		while (ft_index(base, str[x]) < len)
			num = num * len + ft_index(base, str[x++]);
		return (min_checker * num);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		conv_to_atoi;
	int		len;

	if (!base_checker(base_to) || !base_checker(base_from))
		return (0);
	conv_to_atoi = ft_atoi_base(nbr, base_from);
	len = len_num(conv_to_atoi, base_to);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (0);
	ft_putnbr_base(conv_to_atoi, base_to, res);
	res[len + 1] = 0;
	return (res);
}
