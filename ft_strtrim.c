/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:49:56 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/14 20:41:15 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		j;
	int		i;
	char	*s2;

	if (!s)
		return (NULL);
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
	i = -1;
	while (++i < j)
		s2[i] = s[i];
	return (s2);
}
