/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:35:51 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/26 17:16:29 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	range;
	int	i;

	i = 0;
	range = max - min;
	tab = malloc(range * sizeof(int));
	if (min >= max)
		return (NULL);
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
