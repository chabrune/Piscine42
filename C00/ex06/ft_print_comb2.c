/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:43:52 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/13 15:08:54 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	tab[2];

	tab[0] = 0;
	tab[1] = 0;
	while (tab[0] <= 99)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 99)
		{
			ft_putchar(tab[0] / 10 + 48);
			ft_putchar(tab[0] % 10 + 48);
			ft_putchar(' ');
			ft_putchar(tab[1] / 10 + 48);
			ft_putchar(tab[1] % 10 + 48);
			if (tab[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
