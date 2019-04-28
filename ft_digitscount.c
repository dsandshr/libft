/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitscount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:42:02 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/25 15:57:20 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digitscount(int n)
{
	size_t i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	else if (n == 0)
		i++;
	else
	{
		while (n != 0)
		{
			n /= 10;
			i++;
		}
	}
	return (i);
}
