/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:32:11 by vchan             #+#    #+#             */
/*   Updated: 2021/12/08 15:36:25 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ischarset(char s, char const *charset)
{
	size_t	k;

	k = 0;
	while (charset[k])
	{
		if (s == charset[k])
			return (1);
		k++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	k;
	size_t	end;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] && ischarset(s1[i], set))
		i++;
	end = ft_strlen(s1);
	while (end > i && ischarset(s1[end - 1], set))
		end--;
	str = malloc(sizeof(char) * ((end - i) + 1));
	if (!str)
		return (NULL);
	k = 0;
	while (i < end)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
