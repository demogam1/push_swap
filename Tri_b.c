/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tri_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:25:10 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 12:30:06 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	tri_b_1(t_List **lst, t_List **lst_B, int content, int index)
{
	if (index == 0)
	{
		pa(lst, lst_B);
		ft_putendl_fd("pa", 1);
	}
	else if (index == 1)
	{
		rb(lst_B);
		ft_putendl_fd("rb", 1);
		pa(lst, lst_B);
		ft_putendl_fd("pa", 1);
	}
	else
	{
		while ((*lst_B)->content != content)
		{
			rb(lst_B);
			ft_putendl_fd("rb", 1);
		}
		pa(lst, lst_B);
		ft_putendl_fd("pa", 1);
	}
}

static	void	tri_b_2(t_List **lst, t_List **lst_B, int content)
{
	while ((*lst_B)->content != content)
	{
		rrb(lst_B);
		ft_putendl_fd("rrb", 1);
	}
	pa(lst, lst_B);
	ft_putendl_fd("pa", 1);
}

void	tri_b(t_List **lst, t_List **lst_B)
{
	int	content;
	int	index;

	while (len_list(*lst_B) > 0)
	{
		return_max_et_index(*lst_B, &content, &index);
		if (len_list(*lst_B) == 1)
		{
			pa(lst, lst_B);
			ft_putendl_fd("pa", 1);
			break ;
		}
		else if (index <= len_list(*lst_B) / 2)
			tri_b_1(lst, lst_B, content, index);
		else
			tri_b_2(lst, lst_B, content);
	}
	free_list(*lst_B);
}
