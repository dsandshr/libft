/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:49:12 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/11 20:19:06 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *s1;

	s1 = malloc(size);
	if (s1 == NULL)
		return (NULL);
	ft_memset(s1, 0, size);
	return (s1);
}
