/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:31:44 by vchan             #+#    #+#             */
/*   Updated: 2021/12/03 12:34:08 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	if (s == NULL && !c)
		return (NULL);
	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}		

/* int main(void)
{
	char str[50] = "Banane Boris";
	ft_putstr(str);

	write (1, "\n", 1);

	ft_memset(str, '\0', 4);
	ft_putstr(str);

	write (1, "\n", 1);

	//memset(str, '\0', 1);
} */
