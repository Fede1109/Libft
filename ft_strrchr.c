/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:10:44 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/09/21 17:03:50 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;
	int		i;

	i = 0;
	last_c = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			last_c = (char *)s;
		s++;
	}
	if ((unsigned char)c == 0)
		return ((char *) s);
	return (last_c);
}
