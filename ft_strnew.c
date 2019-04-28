/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:43:39 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/27 15:38:26 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s1;

	if (size + 1 == 0)
		return (NULL);
	s1 = (char *)malloc(sizeof(char) * (size + 1));
	if (s1 == NULL)
		return (NULL);
	return (ft_memset(s1, (int)'\0', size + 1));
}
