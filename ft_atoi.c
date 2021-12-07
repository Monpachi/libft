/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:50:37 by vchan             #+#    #+#             */
/*   Updated: 2021/12/06 16:41:11 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)

{
	int	i;
	int	n;
	int	value;

	n = 1;
	i = 0;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			n = (n * -1);
		i++;
	}
	value = 0;
	while (nptr[i] != '\0' && nptr[i] <= '9' && nptr[i] >= '0')
	{
		value = value * 10 + (nptr[i] - '0');
		i++;
	}
	return (value * n);
}
