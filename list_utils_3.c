/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:24:29 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 12:31:39 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int_max_min(t_List *lst)
{
	while (lst)
	{
		if (lst->content > INT_MAX || lst->content < INT_MIN)
			return (1);
		lst = lst->next;
	}
	return (0);
}

/* return pos_1 */

void	int_first(t_List *lst, int max, int *contenu, int *index)
{
	int	i;

	i = 0;
	while (lst->content > max)
	{
		lst = lst->next;
		i++;
	}
	*index = i;
	*contenu = lst->content;
}

/* return pos_2 */

void	int_last(t_List *lst, int max, int *contenu, int *index)
{
	int	i;
	int	*tab;

	tab = malloc(sizeof(tab) * len_list(lst));
	i = len_list(lst) - 1;
	list_to_tab(tab, lst);
	while (tab[i] > max)
		i--;
	*index = i;
	*contenu = tab[i];
	free(tab);
}

/* return pos_1 */

void	return_int_first(t_List *lst, int *contenu, int *index)
{
	int	i;
	int	min;

	min = return_min_first(lst);
	i = 0;
	while (lst->content != min)
	{
		lst = lst->next;
		i++;
	}
	*index = i;
	*contenu = lst->content;
}
