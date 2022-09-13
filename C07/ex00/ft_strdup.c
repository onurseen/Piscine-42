/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:18:27 by osen              #+#    #+#             */
/*   Updated: 2022/09/13 17:21:07 by osen             ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		x;
	int		len;
	char	*dest;

	x = -1;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	while (++x < len)
		dest[x] = src[x];
	dest[x] = 0;
	return (dest);
}
