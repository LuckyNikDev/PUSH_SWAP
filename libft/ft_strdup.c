/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsailor <bsailor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:34:22 by bsailor           #+#    #+#             */
/*   Updated: 2021/05/20 14:37:04 by bsailor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		length;
	char	*result;

	length = ft_strlen(s1);
	ret = malloc(length + 1);
	if (ret == NULL)
		return (NULL);
	result = (char *)ft_memcpy(ret, s1, (length + 1));
	if (ft_strlen(result) == 0)
		ft_memset(ret, 0, length);
	return (ret);
}
