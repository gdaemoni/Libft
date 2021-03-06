/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:28:54 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:13:16 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlist.h"

t_dlist		*ft_dlstget(t_dlist *cdlst, size_t ind)
{
	while (ind-- && cdlst->next)
		cdlst = cdlst->next;
	return (cdlst);
}
