/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:39:50 by osen              #+#    #+#             */
/*   Updated: 2022/09/13 17:53:46 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	size;
	int	*arr;

	if (min >= max)
		return (0);
	x = -1;
	size = max - min;
	arr = (int *)(malloc(sizeof(int) * size));
	if (!arr)
		return (0);
	while (++x < size)
		arr[x] = min + x;
	return (arr);
}
