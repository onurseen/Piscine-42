/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:46:47 by osen              #+#    #+#             */
/*   Updated: 2022/09/15 15:49:59 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

int	string_len(char **str, int size, int sep_len)
{
	int	len;
	int	x;

	x = 0;
	while (x < size)
	{
		len = ft_strlen(str[x]);
		len += sep_len;
		x++;
	}
	len -= sep_len;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	len = string_len(strs, size, ft_strlen(sep));
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (x < size)
	{
		z = 0;
		while (strs[x][z])
			str[y++] = strs[x][z++];
		z = 0;
		while (sep[z] && x != size - 1)
			str[y++] = sep[z++];
		x++;
	}
	str[y] = '\0';
	return (str);
}
