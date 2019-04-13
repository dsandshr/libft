/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:26:14 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/13 20:41:40 by dsandshr         ###   ########.fr       */
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
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\n' || str[i] == '\f' || str[i] == '\v')
		i++;
	m = (str[i] == '-' ? -1 : 1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((s >= 922337203685477581 && str[i] >= '0' && str[i] <= '9') ||
			(s == 922337203685477580 && str[i] >= '8' && str[i] <= '9'))
			return (s = (m == 1 ? -1 : 0));
		s = (s * 10) + (str[i] - '0');
		i++;
	}
	return (s * m);
}
