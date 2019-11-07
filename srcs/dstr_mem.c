/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstr_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:46:00 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:14:38 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dstring.h"

void			dstr_del(DSTRING **dst)
{
	if (!dst || !(*dst))
		return ;
	if ((*dst)->txt)
		free((*dst)->txt);
	if ((*dst))
		free(*dst);
	*dst = 0;
}

DSTRING			*dstr_new(const char *src)
{
	DSTRING		*dstr;

	if (!(dstr = ft_memalloc(sizeof(DSTRING))))
		return (0);
	if (!src)
		return (dstr);
	dstr->strlen = ft_strlen(src);
	dstr->bks = (dstr->strlen / DSTR_BLK_SZ) + 1;
	if (!(dstr->txt = ft_memalloc(dstr->bks * DSTR_BLK_SZ)))
	{
		free(dstr);
		return (0);
	}
	ft_memcpy(dstr->txt, src, (size_t)dstr->strlen);
	return (dstr);
}
