/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:38:50 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/14 20:39:27 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;

	if (s)
	{
		if (!(s2 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			s2[i] = f(s[i]);
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (NULL);
}
