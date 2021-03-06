/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaemoni <gdaemoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 07:39:28 by gdaemoni          #+#    #+#             */
/*   Updated: 2019/11/07 14:12:06 by gdaemoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}
