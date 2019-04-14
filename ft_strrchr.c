/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:14:13 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/14 20:40:42 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (s[i] != (char)c && i >= 0)
		i--;
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	return (NULL);
}
