/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:02:28 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/27 15:48:14 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (1);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nbl;
	int			i;

	i = 0;
	if (check_error(base) == 1)
		return ;
	nbl = nbr;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl = -nbl;
	}
	if (nbl >= ft_strlen(base))
	{
		ft_putnbr_base(nbl / ft_strlen(base), base);
		ft_putnbr_base(nbl % ft_strlen(base), base);
	}
	else
		ft_putchar(base[nbl]);
}
