/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:22:17 by osen              #+#    #+#             */
/*   Updated: 2022/08/30 18:29:34 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_mod;
	int	temp_div;
	int	temp_a;
	int	temp_b;

	if (b != 0)
	{
		temp_a = *a;
		temp_b = *b;
		temp_mod = temp_a % temp_b;
		temp_div = temp_a / temp_b;
		*a = temp_div;
		*b = temp_mod;
	}
}
