/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:26:14 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/12 22:01:27 by dsandshr         ###   ########.fr       */
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
	while (*str <= 32)
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
int main()
{
	printf("%d\n", ft_atoi("922337203685477580723455554545465464464"));
	printf("%d\n", atoi("9223372036854775807234555555552525555"));
	return (0);
}
