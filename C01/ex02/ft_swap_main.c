/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:40:06 by osen              #+#    #+#             */
/*   Updated: 2022/08/30 17:40:42 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	*x;
	int	*y;
	int	num1;
	int	num2;

	num1 = 42;
	num2 = 57;
	x = &num1;
	y = &num2;
	ft_swap(x, y);
	printf("%d %d", *x, *y);
}
