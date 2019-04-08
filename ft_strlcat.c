/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:25:03 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/06 15:07:28 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t i;
	size_t j;
	
	j = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1 < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return(i + ft_strlen(src));
}
