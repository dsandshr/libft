/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:55:36 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/07 21:58:40 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *s2;
	int i;

	s2 = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	return (s2);
}
