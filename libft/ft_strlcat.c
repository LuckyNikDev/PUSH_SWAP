/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsailor <bsailor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:45:35 by bsailor           #+#    #+#             */
/*   Updated: 2021/06/04 13:20:40 by bsailor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_strlcat(char *dst, const char *src, size_t size)
{
	long	i;

	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) > (long)size)
		return (ft_strlen(src) + (long)size);
	else
	{
		i = ft_strlen(dst);
		i += ft_strlcpy(dst + i, src, size - i);
		return (i);
	}
}
