/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:25:03 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/14 20:55:49 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while (d[i] && i < n)
		i++;
	while (s[j] && (i + j + 1 < n))
	{
		d[i + j] = s[j];
		j++;
	}
	if (i < n)
		d[i + j] = '\0';
	return (i + ft_strlen(s));
}
