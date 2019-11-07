/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:41:04 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:07:23 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"
#include <stdlib.h>

static void	*zero_size__(void *ptr)
{
	ft_memdel(&ptr);
	return (ptr);
}

void		*ft_realloc(void *ptr, size_t size)
{
	void	*tmp;

	if (size == 0)
		return (zero_size__(ptr));
	if (ptr == (void *)0)
		return (malloc(size));
	if ((tmp = malloc(size)) != (void *)0)
	{
		ft_memcpy(tmp, ptr, size);
		ft_memdel(&ptr);
		return (tmp);
	}
	else
		return ((void *)0);
}
