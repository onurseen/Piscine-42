/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:47:41 by osen              #+#    #+#             */
/*   Updated: 2022/09/10 20:47:41 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	x;
	long	y;

	x = 1;
	y = nb;
	if (y <= 0)
		return (0);
	if (y == 1)
		return (y);
	if (y >= 2)
	{
		while (x * x <= y)
		{
			if (x * x == y)
				return (x);
			x++;
		}
	}
	return (0);
}
