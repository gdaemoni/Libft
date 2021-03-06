/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 09:16:57 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:01:35 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*hs = haystack;
	size_t		nd_len;

	nd_len = ft_strlen(needle);
	if (nd_len == 0)
		return ((char *)hs);
	while (len && *hs)
	{
		if (len >= nd_len)
			if (!(ft_strncmp(hs, needle, nd_len)))
				return ((char *)hs);
		hs++;
		len--;
	}
	return (0);
}
