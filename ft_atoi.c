/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:26:14 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/13 14:47:38 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long long int	i;
	long long int	m;
	long long int	s;

	m = 1;
	s = 0;
	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' ||
			*str == '\n' || *str == '\f' || *str == '\v')
		str++;
	m = (*str == '-' ? m * -1 : m);
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = s * 10 + (str[i] - '0') * m;
		i++;
	}
	if ((s < -9223372036854775807 - 1 && s > 9223372036854775807) || i > 19)
		return (m > 0 ? -1 : 0);
	return (s);
}
