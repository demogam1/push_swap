/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 12:05:09 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 09:39:28 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Effacer le premier element de la liste */

t_List	*free_first(t_List *lst)
{
	t_List	*p;

	if (is_empty_list(lst))
		return (NULL);
	p = lst;
	lst = lst->next;
	free(p);
	return (lst);
}

/* Trouver le maximum de la liste */

int	return_max(t_List *lst)
{
	t_List	*cur;
	t_List	*prec;
	int		max;

	cur = lst;
	prec = lst;
	max = cur->content;
	while (cur->next != NULL)
	{
		cur = cur->next;
		if (prec->content > cur->content)
		{
			if (prec->content > max)
				max = prec->content;
		}
		else if (cur->content > prec->content)
		{
			if (cur->content > max)
				max = cur->content;
		}
	}
	return (max);
}

/* Trouver le minimum de la liste */

int	return_min_first(t_List *lst)
{
	t_List	*cur;
	t_List	*prec;
	int		min;
	int		i;

	cur = lst;
	prec = lst;
	i = 0;
	min = lst->content;
	while (cur->next != NULL && i != len_list(lst) / 2)
	{
		cur = cur->next;
		if (prec->content < cur->content)
		{
			if (prec->content < min)
				min = prec->content;
		}
		else if (cur->content < prec->content)
		{
			if (cur->content < min)
				min = cur->content;
		}
		i++;
	}
	return (min);
}

/* Trouver le minimum de la liste */

int	return_min(t_List *lst)
{
	t_List	*cur;
	t_List	*prec;
	int		min;

	prec = lst;
	cur = lst;
	min = lst->content;
	while (cur->next != NULL)
	{
		cur = cur->next;
		if (prec->content < cur->content)
		{
			if (prec->content < min)
				min = prec->content;
		}
		else if (cur->content < prec->content)
		{
			if (cur->content < min)
				min = cur->content;
		}
	}
	return (min);
}
