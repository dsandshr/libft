/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 21:15:49 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/15 16:09:54 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (dst || src)
	{
		if (((unsigned char *)src < ((unsigned char *)dst)))
			while ((int)--len >= 0)
			{
				((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			}
		else
			while (i < len)
			{
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
				i++;
			}
	}
	return (dst);
}
