/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:08:11 by misaev            #+#    #+#             */
/*   Updated: 2021/09/28 12:16:09 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* return pos_2 */

void	return_int_last(t_List *lst, int *contenu, int *index)
{
	int	i;
	int	ind;
	int	min;
	int	*tab;

	ind = len_list(lst);
	tab = malloc(sizeof(tab) * len_list(lst));
	i = len_list(lst) - 1;
	list_to_tab(tab, lst);
	min = tab[i];
	while (i > len_list(lst) / 2)
	{
		if (tab[i] < tab[i - 1])
		{
			if (tab[i] < min)
			{
				min = tab[i];
				ind--;
			}
		}
		i--;
	}
	*index = ind;
	*contenu = min;
}

/* trier un tableau */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i + 1 < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

/* envoyer la liste dans le tableau */

int	*list_to_tab(int *tab, t_List *lst)
{
	int	i;
	int	lenlist;

	lenlist = len_list(lst);
	i = 0;
	while (i < lenlist)
	{
		tab[i] = lst->content;
		lst = lst->next;
		i++;
	}
	return (tab);
}
