/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:20:22 by osen              #+#    #+#             */
/*   Updated: 2022/09/06 19:23:59 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	decimal_to_hex(char x, int i)
{
	char	*str;

	str = "0123456789abcdef";
	if (i == 1)
		return (str[x % 16]);
	return (str[x / 16]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	x;

	x = -1;
	while (str[++x])
	{
		if (str[x] >= 32 && str[x] < 127)
			ft_putchar(str[x]);
		else
		{
			ft_putchar('\\');
			ft_putchar(decimal_to_hex(str[x], 0));
			ft_putchar(decimal_to_hex(str[x], 1));
		}			
	}
}
