/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:34:04 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/09 17:43:00 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_itoa(int n)
{
	unsigned int j;
	size_t i;
	char *s;

	j = n;
	i = 0;
	s = ft_strnew(ft_digitscount(n));
	if (n < 0)
		j *= -1;
	if (n == 0)
		s[i] = '0';
	while (j > 0)
	{
		s[i] = j % 10 + '0';
		j /= 10;
		i++;
	}
	if (n < 0)
		s[i] = '-';
	return (ft_strrev(s));
}
