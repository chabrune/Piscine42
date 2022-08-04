/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:25:12 by chabrune          #+#    #+#             */
/*   Updated: 2022/07/26 16:29:02 by chabrune         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc((ft_strlen(src) * sizeof (char) + 1));
	if (!ptr)
		return (NULL);
	while (src[i])
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
