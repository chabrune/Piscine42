/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:10:24 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/27 15:46:37 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_whitespaces(char *str, int *ptri)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			ret *= -1;
		i++;
	}
	*ptri = i;
	return (ret);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	ret;

	ret = 0;
	sign = ft_whitespaces(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return (ret * sign);
}
