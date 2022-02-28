/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_tri_500.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:38:45 by misaev            #+#    #+#             */
/*   Updated: 2021/09/28 11:03:08 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* trouver le maximun de la liste et le retourner avec son index */

static	int	rmi(t_List *cur, t_List *prec, int max_int)
{
	max_int = cur->content;
	if (len_list(cur) < 2)
		return (0);
	while (cur->next != NULL)
	{
		cur = cur->next;
		if (prec->content > cur->content)
		{
			if (prec->content > max_int)
				max_int = prec->content;
		}
		else if (cur->content > prec->content)
		{
			if (cur->content > max_int)
				max_int = cur->content;
		}
	}
	return (max_int);
}

void	return_max_et_index(t_List *lst, int *maximum, int *indexation)
{
	t_List	*cur;
	t_List	*prec;
	int		max_int;
	int		i;

	cur = lst;
	prec = lst;
	i = 0;
	max_int = 0;
	max_int = rmi(cur, prec, max_int);
	while (lst->content != max_int)
	{
		if (lst->next == NULL)
			break ;
		lst = lst->next;
		i++;
	}
	*indexation = i;
	*maximum = max_int;
}

/* verifier si il y a des int inferieur au max[i] */

int	check_lower_max(t_List *lst, int max)
{
	while (lst)
	{
		if (lst->content < max)
			return (1);
		lst = lst->next;
	}
	return (0);
}

static	int	rtm(t_List *lst, int *tab)
{
	list_to_tab(tab, lst);
	ft_sort_int_tab(tab, len_list(lst));
	return (*tab);
}

int	*return_tab_max(t_List	*lst)
{
	int	i;
	int	j;
	int	c;
	int	*tab;
	int	*max;

	tab = malloc(sizeof(*tab) * len_list(lst));
	max = malloc(sizeof(*max) * len_list(lst));
	i = 0;
	j = 0;
	c = 0;
	rtm(lst, tab);
	while (i < len_list(lst))
	{
		if (j == 19)
		{
			max[c] = tab[i];
			c++;
			j = 0;
		}
		j++;
		i++;
	}
	free(tab);
	return (max);
}
