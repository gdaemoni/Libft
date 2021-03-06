/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:20:53 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:13:01 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void	ft_dlstpush(t_dlist **dlst, t_dlist *nlst)
{
	t_dlist		*it;

	if (!dlst || !nlst)
		return ;
	if (!(it = *dlst))
	{
		*dlst = nlst;
		return ;
	}
	while (it->next)
		it = it->next;
	it->next = nlst;
	nlst->prev = it;
}
