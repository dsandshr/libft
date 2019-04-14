/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:36:34 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/14 20:41:00 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if (!s2[j + 1])
				return ((char*)s1 + i);
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
