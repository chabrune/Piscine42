/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:46:41 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/20 21:11:05 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl = -nbl;
	}
	if (nbl >= 10)
	{
		ft_putnbr(nbl / 10);
		ft_putnbr(nbl % 10);
	}
	else
		ft_putchar(nbl + 48);
}

int main()
{
	ft_putnbr(-1);
		ft_putchar('\n');
	ft_putnbr(0);
		ft_putchar('\n');
	ft_putnbr(-12);
		ft_putchar('\n');
	ft_putnbr(15);
}
