/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:10:10 by osen              #+#    #+#             */
/*   Updated: 2022/08/30 18:10:12 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 15;
	y = 7;
	ft_div_mod(x, y, &div, &mod);
	printf("%d \n %d", div, mod);
}
