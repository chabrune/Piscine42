/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:11:46 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/24 15:00:10 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ret = ret * nb;
		nb--;
	}
	return (ret);
}
