/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:10:49 by misaev            #+#    #+#             */
/*   Updated: 2021/09/28 11:03:13 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_char_2(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (check_char(argv[i]) == 0)
		{
			ft_putendl_fd("ERROR", 1);
			exit (0);
		}
		i++;
	}
}

int	check_char(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) == 0 && argv[i] != ' ' && argv[i] != '-')
			return (0);
		else if (argv[i] == '-' && ft_isdigit(argv[i + 1]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_arg_count(char **argv)
{
	int		i;
	int		len;
	t_List	*lst;

	lst = empty_list();
	i = 0;
	while (argv[i])
	{
		lst = add_at(lst, ft_atoi(argv[i]), 0);
		i++;
	}
	len = len_list(lst);
	free_list(lst);
	return (len);
}

int	check_if_done(t_List *lst)
{
	t_List	*prec;

	while (lst)
	{
		prec = lst;
		lst = lst->next;
		if (lst == NULL)
			return (0);
		if (prec->content > lst->content)
			return (1);
	}
	return (0);
}

int	check_if_double(t_List *lst)
{
	t_List	*compared;

	compared = lst;
	while (lst)
	{
		compared = compared->next;
		while (compared)
		{
			if (compared == NULL)
				return (0);
			if (lst->content == compared->content)
				return (1);
			else
				compared = compared->next;
		}
		lst = lst->next;
		if (lst == NULL)
			return (0);
		compared = lst;
	}
	return (0);
}
