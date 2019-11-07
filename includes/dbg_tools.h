/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbg_tools.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgranule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 09:47:43 by hgranule          #+#    #+#             */
/*   Updated: 2019/11/04 16:03:13 by hgranule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DBG_TOOLS_H
# define DBG_TOOLS_H

# include <time.h>
# include <unistd.h>

typedef time_t			t_time;
typedef struct timespec	t_tspec;

#define		DBG_TIME_NSEC_TO_UL(time_spc_ptr) \
			((time_spc_ptr->tv_sec * 1000000000) + \
			time_spc_ptr->tv_nsec)

#define		DBG_TIME_MKSEC_TO_UL(time_spc_ptr) \
			((time_spc_ptr->tv_sec * 1000000) + \
			(time_spc_ptr->tv_nsec / 1000))

#define		DBG_TIME_MLSEC_TO_UL(time_spc_ptr) \
			((time_spc_ptr->tv_sec * 1000) + \
			time_spc_ptr->tv_nsec / 1000000)

#define		DBG_TIME_SEC_TO_UL(time_spc_ptr) \
			(time_spc_ptr->tv_sec)

int			dbg_timer_init(t_tspec *spec);
int			dbg_timer_sub(t_tspec *dst, t_tspec *src);
int			dbg_timer_checkp(t_tspec *ctimer);

t_time		dbg_timer_point_ns(void);
t_time		dbg_timer_point_ms(void);
t_time		dbg_timer_point_mks(void);
t_time		dbg_timer_point(void);

#endif
