/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:04:31 by osen              #+#    #+#             */
/*   Updated: 2022/09/10 19:04:33 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;
	int	counter;

	counter = 0;
	num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++counter <= power)
		num *= nb;
	return (num);
}
