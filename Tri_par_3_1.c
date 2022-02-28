/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tri_par_3_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:57:03 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 14:02:12 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tri_par_3(t_List **lst)
{
	t_List	*cur;
	t_List	*last;

	cur = *lst;
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	while (check_if_done(*lst) == 1)
	{
		if (cur->content != return_min(*lst)
			&& last->content == return_max(*lst))
			tri_par_3_3(lst);
		else if (cur->content == return_max(*lst)
			&& last->content == return_min(*lst))
			tri_par_3_1(lst, cur, last);
		else if (cur->content == return_max(*lst)
			&& last->content != return_min(*lst))
			tri_par_3_4(lst);
		else if (cur->content == return_min(*lst)
			&& last->content != return_max(*lst))
			tri_par_3_2(lst, cur, last);
		else if (last->content == return_min(*lst)
			&& cur->content != return_max(*lst))
			tri_par_3_5(lst);
	}
}
