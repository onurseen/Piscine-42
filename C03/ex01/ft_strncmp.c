/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:30:46 by osen              #+#    #+#             */
/*   Updated: 2022/09/07 19:38:14 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1 || s2) && x < n - 1)
	{
		if (s1[x] > s2[x])
			return (0);
		else if (s1[x] < s2[x])
			return (-1);
		x++;
	}
	return (0);
}
