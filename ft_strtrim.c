/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:49:56 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/08 17:48:16 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s)
{
	int j;
	int i;
	char *s2;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (s2 = ft_strnew(0));
	j = i;
	while (s[j])
		j++;
	while (s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n')
		j--;
	s2 = ft_strnew(j - i);
	if (s2 == NULL)
		return (NULL);
	s = s + i;
	j = j - i;
	i = 0;
	while (i < j)
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}
