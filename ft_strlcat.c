/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:26:57 by vchan             #+#    #+#             */
/*   Updated: 2021/12/06 17:23:29 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest1;

	i = 0;
	j = 0;
	dest1 = ft_strnlen(dest, size);
	while (i < size && dest[i])
		i++;
	if (i == size)
		return (i + ft_strlen((char *)src));
	while (src[j])
	{
		if (j < size - dest1 - 1)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
	}
	dest[i] = 0;
	return (dest1 + j);
}
