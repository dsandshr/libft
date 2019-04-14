/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:43:27 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/14 20:34:08 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)d)[i] = ((unsigned char *)s)[i];
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
