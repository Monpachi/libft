/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:40:07 by vchan             #+#    #+#             */
/*   Updated: 2021/12/07 16:29:46 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnumber(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n = -n;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		count;

	i = 0;
	count = countnumber(n);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	str = malloc(sizeof(char *) + (count + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
		i++;
	}
	while (count-- > i)
	{
		str[count] = (n % 10) + 0;
	}
	str[count] = '\0';
	return (str);
}
