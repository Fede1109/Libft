/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:49:19 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/09/19 09:36:40 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h_ptr;
	char	*n_ptr;
	size_t	remaining;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		h_ptr = (char *)haystack;
		n_ptr = (char *)needle;
		remaining = len;
		while (*h_ptr && *n_ptr && *h_ptr == *n_ptr && remaining > 0)
		{
			h_ptr++;
			n_ptr++;
			remaining--;
		}
		if (*n_ptr == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
