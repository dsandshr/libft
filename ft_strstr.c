/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 13:36:34 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/06 18:49:23 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == needle[i])
			i++;
		else
			i = 0;
		if (needle[i] == '\0')
			return ((char *)haystack - i + 1);
		haystack++;
	}
	return (0);
}
