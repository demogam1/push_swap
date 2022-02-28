/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tri_par_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:27:21 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 14:00:58 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	tri_par_5_1(t_List **lst, t_List **lst_b)
{
	rra(lst);
	ft_putendl_fd("rra", 1);
	pb(lst, lst_b);
	ft_putendl_fd("pb", 1);
}

static	void	tri_par_5_2(t_List **lst, t_List **lst_b)
{
	ra(lst);
	ft_putendl_fd("ra", 1);
	pb(lst, lst_b);
	ft_putendl_fd("pb", 1);
}

static	void	tri_par_5_3(t_List **lst, t_List **lst_b, int index, int max)
{
	if (index > len_list(*lst) / 2)
	{
		while ((*lst)->content != max)
		{
			rra(lst);
			ft_putendl_fd("rra", 1);
		}
		pb(lst, lst_b);
		ft_putendl_fd("pb", 1);
	}
	else
	{
		while ((*lst)->content != max)
		{
			ra(lst);
			ft_putendl_fd("ra", 1);
		}
		pb(lst, lst_b);
		ft_putendl_fd("pb", 1);
	}
}

static	void	tri_par_5_4(t_List **lst, t_List **lst_b, int max)
{
	max = return_max(*lst_b);
	if (check_if_done(*lst_b) == 0)
	{
		while ((*lst_b)->content != max)
		{
			rb(lst_b);
			ft_putendl_fd("rb", 1);
		}
	}
	pa(lst, lst_b);
	ft_putendl_fd("pa", 1);
}

void	tri_par_5(t_List **lst)
{
	t_List	*lst_b;
	int		max;
	int		index;

	lst_b = empty_list();
	while (len_list(*lst) != 3)
	{
		return_max_et_index(*lst, &max, &index);
		if (index == len_list(*lst) - 1)
			tri_par_5_1(lst, &lst_b);
		else if (index == 1)
			tri_par_5_2(lst, &lst_b);
		else
			tri_par_5_3(lst, &lst_b, index, max);
	}
	if (check_if_done(*lst) == 1)
		tri_par_3(lst);
	while (len_list(lst_b))
		tri_par_5_4(lst, &lst_b, max);
	while (check_if_done(*lst) == 1)
	{
		ra(lst);
		ft_putendl_fd("ra", 1);
	}
	free_list(lst_b);
}
