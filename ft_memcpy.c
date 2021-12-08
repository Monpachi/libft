/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:37:56 by vchan             #+#    #+#             */
/*   Updated: 2021/12/08 16:32:53 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*reception;
	const char	*source;
	size_t		i;

	source = src;
	reception = dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		reception[i] = source[i];
		i++;
	}
	return (dest);
}
