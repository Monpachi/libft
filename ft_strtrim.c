/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:32:11 by vchan             #+#    #+#             */
/*   Updated: 2021/12/06 16:38:44 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_check_c(char c, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (set[i])
	{
		if (c != set[i])
			count++;
		i++;
	}
	if (count == ft_strlen(set))
		return (0);
	else
		return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	char	*s1_trim;

	s1_len = ft_strlen(s1);
	if (ft_check_c(s1[0], set) == 0)
		i = 0;
	else
		i = 1;
	if (ft_check_c(s1[s1_len - 1], set) == 1)
		s1_len -= 1;
	s1_trim = malloc(sizeof(char) * (s1_len - i + 1));
	if (!s1_trim)
		return (NULL);
	j = 0;
	while (i < s1_len)
		s1_trim[j++] = s1[i++];
	return (s1_trim);
}
