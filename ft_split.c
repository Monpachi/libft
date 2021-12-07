/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:22:19 by vchan             #+#    #+#             */
/*   Updated: 2021/12/07 15:15:52 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ischarset(char c, char charset)
{
	if (c == charset)
	{
		return (1);
	}
	return (0);
}

unsigned int	countword(char const *str, char charset)
{
	unsigned int	i;
	unsigned int	count;
	char			*strs;

	strs = (char *)str;
	count = 0;
	i = 0;
	while (str[i])
	{
		while (ischarset(strs[i], charset) && str[i])
			i++;
		if (!ischarset(strs[i], charset) && str[i])
			count++;
		while (!ischarset(strs[i], charset) && str[i])
			i++;
	}
	return (count);
}

int	lenword(char const *str, char charset)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (ischarset(str[i], charset) && str[i])
		i++;
	while (!ischarset(str[i], charset) && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{	
	unsigned int	i;
	unsigned int	k;
	unsigned int	x;
	char			**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (countword(s, c) + 1));
	if (result == NULL || s == NULL)
		return (0);
	i = 0;
	x = 0;
	while (x < countword(s, c))
	{
		k = 0;
		result[x] = malloc(sizeof(char) * (lenword(&s[i], c) + 1));
		while (ischarset(s[i], c) && s[i])
			i++;
		while (!ischarset(s[i], c) && s[i])
			result[x][k++] = s[i++];
		result[x][k] = '\0';
		x++;
	}
	result[x] = 0;
	return (result);
}	

/* int	main(int argc, char **argv)
{
	char	**strs = ft_split(argv[1], argv[2][0]);
	int		i;

	(void)argc;
	i = 0;
	if (strs)
	{
		while (strs[i])
		{
			if (strs[i])
			{
				printf("%s\n", strs[i]);
				i++;
			}
			else
				break ;
		}
		printf("%s", strs[i]);
	}
	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);} */
