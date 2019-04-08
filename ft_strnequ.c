/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:26:55 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/07 21:38:14 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return (1);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i + 1 < n)
		i++;
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
