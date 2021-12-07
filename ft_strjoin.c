/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:09:09 by vchan             #+#    #+#             */
/*   Updated: 2021/12/07 13:11:11 by vchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int ft_strlen(char const *str)
   {
   int i;

   i = 0;
   while (str[i])
   i++;
   return(i);
   }
   */

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	k;

	len = (ft_strlen(s1) + ft_strlen(s2));

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return(NULL);
	i = 0;
	k = 0;
	if (s1 && s2)
	{
		while (i < ft_strlen(s1)) 
		{
			str[i] = s1[i];
			i++;
		}
		while (i + k < len)
		{
			str[i + k] = s2[k];
			k++;
		}
	}
	str[i + k] = '\0';
	return(str);
}

/* int main(int argc, char **argv)
   {
   (void)argc;
   printf("%s", ft_strjoin(argv[1], argv[2]));
   }

*/
