/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 06:04:42 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:01:40 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t		i;

	i = 0;
	if (s)
		i = ft_strlen(s);
	i > maxlen ? (i = maxlen) : i;
	return (i);
}
