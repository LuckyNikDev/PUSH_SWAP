/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsailor <bsailor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:43:01 by bsailor           #+#    #+#             */
/*   Updated: 2021/06/04 13:21:23 by bsailor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	result;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		len = 0;
	if (ft_strlen(s) <= (long)len)
		len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	result = ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
