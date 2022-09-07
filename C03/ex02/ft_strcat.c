/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:49:01 by osen              #+#    #+#             */
/*   Updated: 2022/09/07 19:52:15 by osen             ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	len;

	len = ft_strlen(dest);
	x = 0;
	while (src[x])
		dest[len++] = src[x++];
	dest[len] = '\0';
	return (dest);
}
