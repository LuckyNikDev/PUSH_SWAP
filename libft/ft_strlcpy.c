/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsailor <bsailor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:18:00 by bsailor           #+#    #+#             */
/*   Updated: 2021/04/20 12:52:01 by bsailor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			count;
	int				i;

	if (dst == NULL && src == NULL)
		return (0);
	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	if (size != 0)
	{
		size--;
		while (size && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
			size--;
		}
		dst[i] = '\0';
	}
	return (count);
}
