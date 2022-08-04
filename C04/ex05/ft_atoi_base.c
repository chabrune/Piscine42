/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:21:27 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/28 16:19:43 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	if (ft_strlen(str) == 1 || ft_strlen(str) == 0)
		return (1);
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') || (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
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

int	ft_whitespaces(char *str, int *ptri)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ret *= -1;
		i++;
	}
	*ptri = i;
	return (ret);
}

int	ft_base(char str, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (i);
}
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int baselen;
	int nb;
	int j;

	nb = 0;
	j = 0;
	if (check_error(base) == 1)
		return (0);
	baselen = ft_strlen(base);
	sign = ft_whitespaces(str, &i);
	printf("%d\n", i);
	while (j < baselen)
	{
		nb = (nb * baselen) + j;
		j = ft_base(str[i++], base);
	}
	return (nb * sign);
}

int main(void)
{
	printf("%d", ft_atoi_base(" ", "01"));

}
