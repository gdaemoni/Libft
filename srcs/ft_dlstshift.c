/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstshift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:31:05 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:12:35 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist		*ft_dlstshift(t_dlist **list)
{
	t_dlist		*lst;

	if (!list || !(*list))
		return (0);
	if ((lst = *list)->next)
		lst->next->prev = 0;
	*list = lst->next;
	return (lst);
}
