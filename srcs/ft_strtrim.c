/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 06:59:45 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:00:50 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (s)
	{
		if ((j = ft_strlen(s)))
		{
			j--;
			while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && i <= j)
				i++;
			while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && i <= j)
				j--;
		}
		return (ft_strsub(s, i, j - i + 1));
	}
	return (0);
}
