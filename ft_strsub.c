/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:59:06 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/08 17:15:08 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *s2;
	size_t i;

	s2 = ft_strnew(len);
	if (s2 == NULL)
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
