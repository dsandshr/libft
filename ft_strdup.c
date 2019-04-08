/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:27:14 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/05 14:58:41 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
	
char	*ft_strdup(const char *s1)
{
	char *s2;

	s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (s2 == NULL)
		return (0);
	return (ft_strcpy(s2, s1));
}
