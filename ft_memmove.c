/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:33:19 by vchan             #+#    #+#             */
/*   Updated: 2021/12/08 16:39:51 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*reception;
	char		*source;
	size_t		i;

	reception = (char *) dest;
	source = (char *) src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (reception > source)
	{
		while (n-- > 0)
		{
			reception[n] = source[n];
		}
	}
	else
	{
		while (i < n)
		{
			reception[i] = source[i];
			i++;
		}
	}
	return (reception);
}
