/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tri_par_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:57:03 by misaev            #+#    #+#             */
/*   Updated: 2021/09/28 16:08:49 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tri_par_3_1(t_List **lst, t_List *cur, t_List *last)
{
	sa(lst);
	ft_putendl_fd("sa", 1);
	if (last->content == return_min(*lst) && cur->content != return_max(*lst))
	{
		rra(lst);
		ft_putendl_fd("rra", 1);
	}
}

void	tri_par_3_2(t_List **lst, t_List *cur, t_List *last)
{
	sa(lst);
	ft_putendl_fd("sa", 1);
	if (cur->content == return_max(*lst) && last->content != return_min(*lst))
	{
		ra(lst);
		ft_putendl_fd("ra", 1);
	}
}

void	tri_par_3_3(t_List **lst)
{
	sa(lst);
	ft_putendl_fd("sa", 1);
}

void	tri_par_3_4(t_List **lst)
{
	ra(lst);
	ft_putendl_fd("ra", 1);
}

void	tri_par_3_5(t_List **lst)
{
	rra(lst);
	ft_putendl_fd("rra", 1);
}
