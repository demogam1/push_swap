/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   different_tri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:34:19 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 14:26:38 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	tri_1(t_List **lst, t_List **lst_b, int frst_ind, int frst_int)
{
	if (frst_ind == 0)
	{
		pb(lst, lst_b);
		ft_putendl_fd("pb", 1);
	}
	else if (frst_ind == 1)
	{
		sa(lst);
		ft_putendl_fd("sa", 1);
		pb(lst, lst_b);
		ft_putendl_fd("pb", 1);
	}
	else
	{
		while ((*lst)->content != frst_int)
		{
			ra(lst);
			ft_putendl_fd("ra", 1);
		}
		if ((*lst)->content == frst_int)
		{
			pb(lst, lst_b);
			ft_putendl_fd("pb", 1);
		}
	}
}

static	void	tri_2(t_List **lst, t_List **lst_b, int lst_ind, int lst_i)
{
	if (lst_ind == len_list(*lst))
	{
		rra(lst);
		ft_putendl_fd("rra", 1);
		pb(lst, lst_b);
		ft_putendl_fd("pb", 1);
	}
	else
	{
		while ((*lst)-> content != lst_i)
		{
			rra(lst);
			ft_putendl_fd("rra", 1);
		}
		if ((*lst)->content == lst_i)
		{
			pb(lst, lst_b);
			ft_putendl_fd("pb", 1);
		}
	}
}

static	void	tri_3(t_List **lst, t_List **lst_b, int *max)
{
	free(max);
	tri_b(lst, lst_b);
}

void	tri(t_List **lst, t_List **lst_b, int *max)
{
	int	first_int;
	int	last_int;
	int	first_int_index;
	int	last_int_index;
	int	i;

	i = 0;
	while (len_list(*lst) > 0)
	{
		while (check_lower_max(*lst, max[i]) == 1
			&& max[i] > 0)
		{
			int_first(*lst, max[i], &first_int, &first_int_index);
			int_last(*lst, max[i], &last_int, &last_int_index);
			if (first_int_index <= len_list(*lst) - last_int_index)
				tri_1(lst, lst_b, first_int_index, first_int);
			else
				tri_2(lst, lst_b, last_int_index, last_int);
		}
		i++;
	}
	tri_3(lst, lst_b, max);
}
