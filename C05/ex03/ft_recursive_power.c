/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:11:46 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/24 15:19:06 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	else if (power >= 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else
		return (0);
}
