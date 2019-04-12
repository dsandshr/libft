/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:58:51 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/12 14:57:19 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		w;
	char	**s;

	i = 0;
	j = 0;
	w = ft_countword(str, c);
	s = (char **)malloc(sizeof(s) * (ft_countword(str, c) + 2));
	if (s == NULL)
		return (NULL);
	while (str[i] == c && str[i])
		i++;
	while (j < w && str[i])
	{
		s[j] = ft_memword(str, c, &i);
		j++;
	}
	s[j] = NULL;
	return (s);
}
