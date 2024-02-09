/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:23:22 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2024/02/09 11:55:45 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize > 0)
	{
		while (dst[i] && i < dstsize)
			i++;
		while (src[j] && (i + j + 1) < dstsize)
		{
			dst[i + j] = src[j];
			j++;
		}
		if (i < dstsize)
			dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
