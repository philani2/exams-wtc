/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:05:48 by bgumede           #+#    #+#             */
/*   Updated: 2018/08/07 11:48:09 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_isws(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

void	rostring(char *str)
{
	int i;
	int j;
	int c;
	int k;

	i = 0;
	c = 0;
	while (str[c] != '\0')
		c++;
	while (str[c] <= 32)
		c--;
	while (str[i] <= 32 && str[i] != '\0')
		i++;
	j = i;
	while (str[i] > 32)
		i++;
	k = i;
	while (str[i] <= 32 && str[i] != '\0')
		i++;
	while (i < c)
	{
		if (ft_isws(str[i]) != 1)
			ft_putchar(str[i]);
		if (ft_isws(str[i]) == 1 && ft_isws(str[i + 1]) != 1)
			ft_putchar(' ');
		i++;
	}
	ft_putchar(' ');
	while (j < k)
	{
		ft_putchar(str[j]);
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
