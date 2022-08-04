/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:42:51 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/13 13:40:30 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putchar(nb / 10 + 48);
		ft_putchar(nb % 10 + 48);

	}

	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else
		ft_putchar(nb + 48);
}

void ft_print_combn(int nb)
{
	int tab[10];
	int i;
	
	i = 0;
	
	while(i < nb)
	{
		tab[i] = i;
		i++;
	}

	while (tab[0] != 10 - nb || tab[nb - 1] != 9)
	{
		if (tab[nb - 1] != 9)
			tab[nb - 1] += 1;
	}
}

int main()
{
	ft_print_combn(1);
}
