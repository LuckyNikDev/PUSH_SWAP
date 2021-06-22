/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsailor <bsailor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:46:08 by bsailor           #+#    #+#             */
/*   Updated: 2021/06/02 12:25:41 by bsailor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list *lst, t_list *new, t_one *pointer)
{
	t_list	*last;

	if (!(new))
	{
		pointer->error = 1;
		return ;
	}
	last = ft_lstlast(lst);
	if (last != NULL)
	{
		last->next = new;
		new->previous = last;
	}
	else
		lst = new;
}
