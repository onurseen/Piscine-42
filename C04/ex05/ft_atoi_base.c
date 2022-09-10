/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:20:11 by osen              #+#    #+#             */
/*   Updated: 2022/09/09 19:11:28 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (str[x] <= 32 || str[x] > 126 || str[x] == 43 || str[x] == 45)
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

int	ft_index(char *str, char c)
{
	int	x;

	x = 0;
	while (str[x] && str[x] != c)
		x++;
	return (x);
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
