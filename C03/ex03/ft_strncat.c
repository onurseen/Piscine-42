/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:57:57 by osen              #+#    #+#             */
/*   Updated: 2022/09/07 19:59:11 by osen             ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	len;

	len = ft_strlen(dest);
	x = 0;
	while (src[x] && x < nb)
		dest[len++] = src[x++];
	dest[len] = '\0';
	return (dest);
}
