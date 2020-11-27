/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:37:37 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/17 15:39:44 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_dtoh(size_t nbr, int flag)
{
	int		i;
	size_t	tmp;
	int		power;
	char	*hex;

	i = 0;
	power = ft_count_power(nbr);
	if (!(hex = malloc(sizeof(char) * (power + 2))))
		return (NULL);
	while (power >= 0)
	{
		tmp = nbr / ft_iterative_power(16, power);
		if (tmp <= 9)
			hex[i] = tmp + 48;
		else if (tmp > 9 && flag > 0)
			hex[i] = tmp + 55;
		else
			hex[i] = tmp + 55 + 32;
		nbr = nbr - tmp * ft_iterative_power(16, power);
		i++;
		power--;
	}
	hex[i] = '\0';
	return (hex);
}
