/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:36:40 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:13:11 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

void		ft_dlstinsert(t_dlist *insrt, t_dlist *prv, t_dlist *nxt)
{
	if (prv)
	{
		insrt->prev = prv;
		prv->next = insrt;
	}
	if (nxt)
	{
		insrt->next = nxt;
		nxt->prev = insrt;
	}
}
