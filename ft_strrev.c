/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:39:25 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/09 17:45:31 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int j;
	int i;
	char *str;

	j = 0;
	i = 0;
	str = ft_strnew(ft_strlen(s));
	while (s[j])
		j++;
	while (j-- > 0)
	{
		str[i] = s[j];
		i++;
	}
	i = 0;
	while (s[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
