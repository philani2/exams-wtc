/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 07:52:42 by bgumede           #+#    #+#             */
/*   Updated: 2018/08/07 08:06:44 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	int		i;

	i = 8;
	while (i--)
	{
		(octet & (1 << i) ? write(1, "1", 1) : write(1, "0", 1));
	}
}

	int  main(int ac, char **av)
	{
		if (ac == 2)
			print_bits(atoi(av[1]));
		return (0);
	}
