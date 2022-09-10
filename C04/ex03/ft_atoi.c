/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:46:19 by osen              #+#    #+#             */
/*   Updated: 2022/09/09 17:58:19 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	x;
	int	min_checker;
	int	num;

	num = 0;
	x = 0;
	min_checker = 1;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	while (str[x] == 45 || str[x] == 43)
	{
		if (str[x] == 45)
			min_checker *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		num = ((str[x] - '0') + (10 * num));
		x++;
	}
	return (num * min_checker);
}
