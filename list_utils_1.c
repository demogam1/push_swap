/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:09:36 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 14:04:04 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Liberer la liste */

t_List	*free_list(t_List *lst)
{
	t_List	*tmp;

	tmp = NULL;
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (lst);
}

/* Calculer la longueur de la liste */

int	len_list(t_List *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

/* Recuperer un element de la liste */

int	get_at(t_List *lst, int pos)
{
	int	i;

	i = 0;
	if (is_empty_list(lst))
		return (-1);
	while (i < pos)
	{
		i++;
		lst = lst->next;
	}
	return (lst->content);
}

/* Modifier un element de la liste */

void	set_at(t_List *lst, int nbr, int pos)
{
	int	i;

	i = 0;
	if (is_empty_list(lst))
		return ;
	while (i < pos)
	{
		i++;
		lst = lst->next;
	}
	lst->content = nbr;
}

/* Free une cellule de la liste */

t_List	*free_at(t_List *lst, int pos)
{
	t_List	*prec;
	t_List	*cur;
	int		i;

	cur = lst;
	prec = lst;
	i = 0;
	if (is_empty_list(lst))
		return (NULL);
	if (pos == 0)
	{
		lst = lst->next;
		free(cur);
		return (lst);
	}
	while (i < pos)
	{
		prec = cur;
		cur = cur->next;
		i++;
	}
	prec->next = cur->next;
	free(cur);
	return (lst);
}
