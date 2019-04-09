/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:43:39 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/09 16:43:28 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s1;
	size_t i;

	i = 0;
	s1 = ft_memalloc(size + 1);
	while (i < size)
	{
		s1[i] = '\0';
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
