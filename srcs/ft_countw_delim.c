/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countw_delim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 23:06:18 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:14:00 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_countw_delim(char const *s, char delim)
{
	unsigned int	i;
	unsigned int	count;
	unsigned char	f_word;

	i = 0;
	f_word = 0;
	count = 0;
	if (s)
		while (s[i])
		{
			if (s[i] == delim || s[i] == 0)
				if (f_word)
					f_word = 0;
			if (s[i] != delim && s[i])
				if (!f_word)
				{
					count++;
					f_word = 1;
				}
			i++;
		}
	return (count);
}
