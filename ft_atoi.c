/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:15:49 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/09/21 16:53:01 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	sign = 0;
	result = 0;
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign++;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (sign != 0)
		return (-result);
	else
		return (result);
}
