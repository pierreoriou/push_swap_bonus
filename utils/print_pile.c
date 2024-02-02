/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:55:59 by poriou            #+#    #+#             */
/*   Updated: 2024/02/01 12:15:21 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_pile(char *explain, t_node *pile)
{
	if (!pile)
		return ;
	while (pile)
	{
		printf("%s: %d\n", explain, pile->value);
		pile = pile->next;
	}
}
