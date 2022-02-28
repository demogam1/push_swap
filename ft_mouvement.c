/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouvement.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:22:03 by misaev            #+#    #+#             */
/*   Updated: 2021/09/28 14:30:36 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_List **lst)
{
	t_List	*first;
	t_List	*seconde;
	int		sec;

	first = *lst;
	seconde = *lst;
	seconde = seconde->next;
	sec = seconde->content;
	set_at(*lst, first->content, 1);
	set_at(*lst, sec, 0);
}

void	sb(t_List **lst)
{
	t_List	*first;
	t_List	*seconde;
	int		sec;

	first = *lst;
	seconde = *lst;
	seconde = seconde->next;
	sec = seconde->content;
	set_at(*lst, first->content, 1);
	set_at(*lst, sec, 0);
}

void	ss(t_List **liste_a, t_List **liste_b)
{
	sa(liste_a);
	sb(liste_b);
	ft_putstr_fd("ss", 1);
}

void	ra(t_List **lst)
{
	t_List	*p;
	int		frst;

	p = *lst;
	frst = p->content;
	*lst = add_at(*lst, frst, len_list(*lst));
	*lst = free_first(*lst);
}

void	rb(t_List **lst)
{
	t_List	*p;
	int		frst;

	p = *lst;
	frst = p->content;
	*lst = add_at(*lst, frst, len_list(*lst));
	*lst = free_first(*lst);
}
