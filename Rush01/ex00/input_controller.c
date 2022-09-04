/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_controller.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osen <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:27:22 by osen              #+#    #+#             */
/*   Updated: 2022/09/04 18:57:44 by osen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define N 4

int	is_number(char a)
{
	return (a <= '9' && a >= '0');
}

int	consecutive_space(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		if (str[i] == ' ' && str[i + 1] == ' ')
			return (0);
	return (1);
}

int	consecutive_number(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		if (is_number(str[i]) && is_number(str[i + 1]))
			return (0);
	return (1);
}

int	is_valid(char *str)
{
	int	x;
	int	j;
	int	i;

	x = 0;
	while (str[x] != 0)
	{
		if (!(str[x] == ' ' || is_number(str[x])))
			return (0);
		x++;
	}
	if (x == N * N * 2 - 1)
		j = 1;
	i = (consecutive_space(str) && consecutive_number(str));
	j = (j && i);
	return (1 && j);
}
