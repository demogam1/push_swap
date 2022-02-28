/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:12:03 by misaev            #+#    #+#             */
/*   Updated: 2021/09/29 12:06:47 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft/libft.h"

# define INT_MAX	2147483647
# define INT_MIN	-2147483648

typedef struct lst
{
	long int	content;
	int			index;
	struct lst	*next;
}	t_List;

/* TRI PAR 3 */
void	tri_par_3(t_List **lst);
void	tri_par_3_1(t_List **lst, t_List *cur, t_List *last);
void	tri_par_3_2(t_List **lst, t_List *cur, t_List *last);
void	tri_par_3_3(t_List **lst);
void	tri_par_3_4(t_List **lst);
void	tri_par_3_5(t_List **lst);
/* -FONCTION POUR LA LISTE- */
t_List	*empty_list(void);
int		is_empty_list(t_List *lst);
t_List	*add_at(t_List *lst, long long int nbr, int pos);
t_List	*free_at(t_List *lst, int pos);
t_List	*free_list(t_List *lst);
t_List	*free_first(t_List *lst);
int		len_list(t_List *lst);
int		get_at(t_List *lst, int pos);
void	set_at(t_List *lst, int nbr, int pos);
int		return_max(t_List *lst);
int		return_min(t_List *lst);
int		return_min_first(t_List *lst);
void	ft_sort_int_tab(int *tab, int size);
int		*list_to_tab(int *tab, t_List *lst);
void	return_int_first(t_List *lst, int *contenu, int *index);
void	return_int_last(t_List *lst, int *contenu, int *index);
/* -FONCTION POUR CAS D'ERREUR- */
int		check_char(char *argv);
void	check_char_2(char **argv);
int		check_arg_count(char **argv);
int		check_if_done(t_List *lst);
int		check_if_double(t_List *lst);
int		check_int_max_min(t_List *lst);
/* -FONCTION MOUVEMENT- */
void	sb(t_List **lst);
void	sa(t_List **lst);
void	ss(t_List **liste_a, t_List **liste_b);
void	ra(t_List **lst);
void	rb(t_List **lst);
void	rr(t_List *liste_a, t_List *liste_b);
void	rra(t_List **lst);
void	rrb(t_List **lst);
void	pb(t_List **lst_a, t_List **lst_b);
void	pa(t_List **lst_a, t_List **lst_b);
/* -FONCTION TRI- */
void	tri_par_5(t_List **lst);
void	tri(t_List **lst, t_List **lst_b, int *max);
void	tri_b(t_List **lst, t_List **lst_B);
int		*return_tab_max(t_List *lst);
void	int_first(t_List *lst, int max, int *contenu, int *index);
void	int_last(t_List *lst, int max, int *contenu, int *index);
int		check_lower_max(t_List *lst, int max);
void	return_max_et_index(t_List *lst, int *max, int *index);
#endif