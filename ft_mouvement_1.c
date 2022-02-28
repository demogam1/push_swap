/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouvement_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:30:03 by misaev            #+#    #+#             */
/*   Updated: 2021/09/28 14:32:32 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_List *liste_a, t_List *liste_b)
{
	ra(&liste_a);
	rb(&liste_b);
	ft_putstr_fd("rr", 1);
}

void	rra(t_List **lst)
{
	t_List	*p;
	int		last;
	int		i;

	p = *lst;
	i = 0;
	while (i < len_list(*lst))
	{
		if (p->next == NULL)
			break ;
		i++;
		p = p->next;
	}
	last = p->content;
	*lst = add_at(*lst, last, 0);
	*lst = free_at(*lst, len_list(*lst) - 1);
}

void	rrb(t_List **lst)
{
	t_List	*p;
	int		last;
	int		i;

	p = *lst;
	i = 0;
	while (i < len_list(*lst))
	{
		if (p->next == NULL)
			break ;
		i++;
		p = p->next;
	}
	last = p->content;
	*lst = add_at(*lst, last, 0);
	*lst = free_at(*lst, len_list(*lst) - 1);
}

void	pb(t_List **lst_a, t_List **lst_b)
{
	t_List	*a;

	a = *lst_a;
	*lst_b = add_at(*lst_b, a->content, 0);
	*lst_a = free_first(*lst_a);
}

void	pa(t_List **lst_a, t_List **lst_b)
{
	t_List	*b;

	b = *lst_b;
	*lst_a = add_at(*lst_a, b->content, 0);
	*lst_b = free_first(*lst_b);
}
