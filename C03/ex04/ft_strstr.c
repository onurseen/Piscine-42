/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:12:29 by osen              #+#    #+#             */
/*   Updated: 2022/09/08 15:31:53 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;
	int	flag;
	int	dum;

	flag = 1;
	x = -1;
	while (str[++x])
	{
		y = 0;
		dum = x;
		while (to_find[y])
		{
			if (str[dum++] == to_find[y++])
				flag = 1;
			else
			{
				flag = 0;
				break ;
			}
		}
	}
	if (flag)
		return (to_find);
	return (str);
}
