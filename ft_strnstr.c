/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:10:10 by vchan             #+#    #+#             */
/*   Updated: 2021/12/07 17:05:01 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	char	*big1;
	char	*little1;

	big1 = (char *) big;
	little1 = (char *) little;
	i = 0;
	if (!len || big == little)
		return (big1);
	if (little1[0] == '\0')
		return (big1);
	while (i < len)
	{
		k = 0;
		while (i + k < len && big1[i + k] == little1[k])
		{
			k++;
			if (!little1[k])
				return (&big1[i]);
		}
		i++;
	}
	return (0);
}
