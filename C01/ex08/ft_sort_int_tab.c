/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:24:27 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/15 11:54:57 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	swap = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{	
		swap = tab[i];
		tab[i] = tab[i + 1];
		tab[i + 1] = swap;
		i = 0;
		}
		else
			i++;
	}
}
