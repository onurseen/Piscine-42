/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:30:24 by osen              #+#    #+#             */
/*   Updated: 2022/09/18 15:30:25 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	x;

	x = 0;
	while (charset[x])
		if (charset[x++] == c)
			return (1);
	return (0);
}

int	word_counter(char *str, char *charset)
{
	int	x;
	int	counter;

	x = 0;
	counter = 0;
	while (str[x])
	{
		while (str[x] && check_sep(str[x], charset))
			x++;
		if (str[x])
			counter++;
		while (str[x] && !check_sep(str[x], charset))
			x++;
	}
	return (counter);
}

int	ft_strlen(char *str, char *charset)
{
	int	x;

	x = 0;
	while (str[x] && !check_sep(str[x], charset))
		x++;
	return (x);
}

char	*ft_word(char *str, char *charset)
{
	int		len;
	int		x;
	char	*word;

	x = -1;
	len = ft_strlen(str, charset);
	word = (char *)malloc(sizeof(char) * len + 1);
	while (++x < len)
		word[x] = str[x];
	word[x] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**string;
	int		x;

	x = 0;
	string = (char **)malloc(sizeof(char *) * word_counter(str, charset) + 1);
	while (*str)
	{
		while (*str && check_sep(*str, charset))
			str++;
		if (*str)
			string[x++] = ft_word(str, charset);
		while (*str && !check_sep(*str, charset))
			str++;
	}
	string[x] = 0;
	return (string);
}
