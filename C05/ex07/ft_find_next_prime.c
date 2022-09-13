/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:11:26 by osen              #+#    #+#             */
/*   Updated: 2022/09/12 21:12:08 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 3;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
		x += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	num;

	num = nb;
	if (num <= 2)
		return (2);
	while (num > 2)
	{
		if (ft_is_prime(num))
			return (num);
		num++;
	}
	return (num);
}
