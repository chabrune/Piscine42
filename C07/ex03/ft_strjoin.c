/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:20:38 by chabrune          #+#    #+#             */
/*   Updated: 2022/08/02 16:56:15 by chabrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		new_len;
	char	*join;

	new_len = ft_strlen(sep) * (size - 1);
	i = 0;
	if (size == 0)
	{
		join = malloc(1);
		return (join);
	}
	while (i++ < size)
		new_len += ft_strlen(strs[i]);
	join = malloc(sizeof(char) * new_len + 1);
	i = 1;
	join = ft_strcat(join, strs[0]);
	while (i < size)
	{
		ft_strcat(join, sep);
		ft_strcat(join, strs[i]);
		i++;
	}
	return (join);
}
