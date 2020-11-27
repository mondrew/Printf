/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_power.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:41:34 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/17 15:42:16 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_count_power(size_t nbr)
{
	int	power;

	power = 0;
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		power++;
	}
	return (power);
}
