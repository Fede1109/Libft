/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:08:49 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/09/19 12:33:22 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t num)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) b;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
