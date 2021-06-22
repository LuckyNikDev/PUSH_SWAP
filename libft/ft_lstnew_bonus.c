/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsailor <bsailor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:58:23 by bsailor           #+#    #+#             */
/*   Updated: 2021/06/10 17:17:24 by bsailor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int value, int order)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (result == NULL)
		return (NULL);
	result->value = value;
	result->order = order;
	result->quantity_one = 0;
	result->swap = 0;
	result->next = NULL;
	result->previous = NULL;
	return (result);
}
