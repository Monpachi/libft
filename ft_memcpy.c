/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:37:56 by vchan             #+#    #+#             */
/*   Updated: 2021/12/07 15:05:30 by vchan            ###   ########.fr       */
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
/* int main(void)
   {
   puts(ft_memcpy(((void*)0), ((void*)0), 3));
   puts(reception);
   write(1, "\n", 1);
   puts(source);
   write(1, "\n", 1);

   ft_memcpy(reception, source, 3);
   puts(reception);
   write (1, "\n", 1);
   }*/
