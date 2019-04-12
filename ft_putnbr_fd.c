/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:58:11 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/11 20:22:55 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int				i;
	long long int	nb_char[20];

	i = 0;
	if (n < 0)
		ft_putchar_fd('-', fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	while (n != 0)
	{
		if (n < 0)
		{
			nb_char[i] = n % 10 * -1;
			n = n / 10;
		}
		else
		{
			nb_char[i] = n % 10;
			n = n / 10;
		}
		i++;
	}
	while (i-- > 0)
		ft_putchar_fd(nb_char[i] + '0', fd);
}
