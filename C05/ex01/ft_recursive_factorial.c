/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:11:46 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/24 15:03:27 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb > 0)
		ret = nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	return (ret);
}
