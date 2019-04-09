/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:15:52 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/09 16:19:43 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int n)
{
	int i;
	long long int nb_char[20];

	i = 0;
	if (n < 0)
		ft_putchar('-');
	else if (n == 0)
		ft_putchar('0');
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
	ft_putchar(nb_char[i] + '0');
}
