/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:01:24 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/06 13:23:26 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;
	int n;

	n = 0;
	i = ft_strlen(s1);
	while (s2[n])
	{
		s1[i] = s2[n];
		n++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
