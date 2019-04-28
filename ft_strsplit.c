/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:58:51 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/25 15:13:34 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		w;
	char	**s;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	w = ft_countword(str, c);
	if (!(s = (char **)malloc(sizeof(s) * (ft_countword(str, c) + 2))))
		return (NULL);
	while (str[i] == c && str[i])
		i++;
	while (j < w && str[i])
	{
		if (!(s[j] = ft_memword(str, c, &i)))
		{
			free(s[j]);
			return (NULL);
		}
		j++;
	}
	s[j] = NULL;
	return (s);
}
