/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_reverse_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:23:45 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 12:08:33 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_reverse_rotate(t_node **pile, char c)
{
	t_node	*first;
	t_node	*bef_last;
	t_node	*last;

	if (!pile || !*pile || !(*pile)->next)
		return ;
	first = *pile;
	last = lstlast(*pile);
	while ((*pile)->next->next)
		*pile = (*pile)->next;
	bef_last = *pile;
	last->next = first;
	*pile = last;
	bef_last->next = NULL;
	upd_main_properties(*pile);
	if (c == 'a')
		ft_putendl_fd("rra", 1);
	if (c == 'b')
		ft_putendl_fd("rrb", 1);
}

void	i_reverse_rotate_both(t_node **pa, t_node **pb)
{
	if (!pa || !*pa || !(*pa)->next)
		return ;
	if (!pb || !*pb || !(*pb)->next)
		return ;
	i_reverse_rotate(pa, 'c');
	i_reverse_rotate(pb, 'c');
	ft_putendl_fd("rrr", 1);
}
