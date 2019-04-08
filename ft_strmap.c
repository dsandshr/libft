/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:38:50 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/07 21:55:26 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *s2;
	int i;

	s2 = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		s2[i] = f(s[i]);
		i++;
	}
	return (s2);
}
