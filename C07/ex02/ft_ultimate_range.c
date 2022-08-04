/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:44:08 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/26 18:07:55 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	tab = malloc(size * sizeof(int));
	if (tab == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (size);
}
