/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 22:42:10 by dsandshr          #+#    #+#             */
/*   Updated: 2019/04/14 20:25:21 by dsandshr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;

	if (*alst && del && alst)
	{
		while (*alst)
		{
			new = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = new;
		}
	}
}
