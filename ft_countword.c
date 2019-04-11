/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:37:42 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/11 17:39:14 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(const char *s, char c)
{
	int w;
	int i;

	i = 0;
	w = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			w++;
		i++;
	}
	if (s[0] != '\0')
		w++;
	return (w);
}