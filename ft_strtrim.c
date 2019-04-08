/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:49:56 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/08 15:02:12 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int i;
	char *s2;
	int j;

	i = 0;
	while (s[i] == ' ' && s[i] == '\n' && s[i] == '\t')
		i++;
	j = i;
	while (s[j])
		j++;
	while (s[j] == ' ' && s[j] == '\n' && s[i] == '\t')
		j--;
	s2 = ft_strnew(j - i);
	if (s2 == NULL)
		return (NULL);
	while (i <	j)
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}
