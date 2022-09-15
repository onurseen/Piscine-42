/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:01:14 by osen              #+#    #+#             */
/*   Updated: 2022/09/15 15:02:25 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	x;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tab = (int *)(malloc(sizeof(int) * size));
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	x = -1;
	while (++x < size)
		tab[x] = min + x;
	return (size);
}
