/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:17:35 by osen              #+#    #+#             */
/*   Updated: 2022/09/03 20:18:15 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;

	i = 0;
	while (i < size)
	{
		k = 0;
		while (k < size - 1)
		{
			if (tab[k] < tab[k + 1])
			{
				ft_swap(&tab[k], &tab[k + 1]);
			}
			k++;
		}
		i++;
	}
}
