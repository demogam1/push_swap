/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:38:31 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 12:06:09 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Cree une cellule pour l ajouter a la liste */
static	t_List	*creat_cell(long long int nbr);

static	t_List	*creat_cell(long long int nbr)
{
	t_List	*cell;

	cell = malloc(sizeof(t_List));
	if (!cell)
		return (NULL);
	cell->content = nbr;
	cell->next = NULL;
	return (cell);
}

/* initialiser une liste vide */

t_List	*empty_list(void)
{
	return (NULL);
}

/*Verifier si la liste est vide */

int	is_empty_list(t_List *lst)
{
	if (lst == NULL)
		return (1);
	else
		return (0);
}

/* Ajouter un element dans la liste a une position specifique */

t_List	*add_at(t_List *lst, long long int nbr, int pos)
{
	t_List	*prec;
	t_List	*cur;
	t_List	*cell;
	int		i;

	prec = lst;
	cur = lst;
	i = 0;
	cell = creat_cell(nbr);
	if (is_empty_list(lst))
		return (cell);
	if (pos == 0)
	{
		cell->next = lst;
		return (cell);
	}
	while (i < pos)
	{
		prec = cur;
		cur = cur->next;
		i++;
	}
	prec->next = cell;
	cell->next = cur;
	return (lst);
}
