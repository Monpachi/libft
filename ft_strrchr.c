/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:35:55 by vchan             #+#    #+#             */
/*   Updated: 2021/12/07 15:03:55 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	while (j >= 0)
	{
		if (s[j] == (char)c)
		{
			return ((char *)s + j);
		}
		j--;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s----%s", ft_strrchr(argv[1], 't'), strrchr(argv[1], 't'));
}
*/
