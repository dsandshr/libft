/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:43:39 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/12 13:51:03 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)malloc(sizeof(char) * size + 1);
	if (s1 == NULL)
		return (NULL);
	while (i < size)
	{
		s1[i] = '\0';
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
