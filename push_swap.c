/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:23:03 by misaev            #+#    #+#             */
/*   Updated: 2021/10/04 09:33:22 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_tri(t_List **lst)
{
	t_List	*lst_b;
	int		*max;

	max = return_tab_max(*lst);
	lst_b = empty_list();
	if (len_list(*lst) <= 3)
	{
		tri_par_3(lst);
		free(max);
	}
	else if (len_list(*lst) <= 10 && len_list(*lst) > 3)
	{
		tri_par_5(lst);
		free(max);
	}
	else
		tri(lst, &lst_b, max);
	free_list(*lst);
	free_list(lst_b);
}

static	void	teste_arg(t_List *list_a)
{
	if (check_if_double(list_a) == 1
		|| check_int_max_min(list_a) == 1)
	{
		ft_putendl_fd("ERROR", 1);
		exit(0);
	}
	if (check_if_done(list_a) == 0)
	{
		free_list(list_a);
		exit(0);
	}
}

static void	push_args_to_list(int ac, char **argv, int boolean)
{
	t_List	*list_a;
	int		i;
	int		len;

	list_a = empty_list();
	len = ac - 1;
	if (boolean == 1)
		i = 0;
	else
		i = 1;
	while (i <= len)
	{
		list_a = add_at(list_a, ft_atoi(argv[len]), 0);
		len--;
	}
	teste_arg(list_a);
	check_tri(&list_a);
}

int	main(int ac, char **argv)
{
	char	**tab;

	tab = NULL;
	if (ac == 2)
	{
		if (check_char(argv[1]) == 1)
		{
			tab = ft_split(argv[1], ' ');
			ac = check_arg_count(tab);
			if (ac == 1)
				return (0);
			push_args_to_list(ac, tab, 1);
		}
		else
		{
			ft_putendl_fd("ERROR", 1);
			return (0);
		}
	}
	else if (ac > 2)
	{
		check_char_2(argv);
		push_args_to_list(ac, argv, 0);
	}
	return (0);
}
