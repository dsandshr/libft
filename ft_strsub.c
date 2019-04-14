/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:59:06 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/14 20:41:08 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (!(s2 = ft_strnew(len)))
		return (NULL);
	if (!s)
		return (NULL);
	i = 0;
	s = s + start;
	while (i < len)
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}
