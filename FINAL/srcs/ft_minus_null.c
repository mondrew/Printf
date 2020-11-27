/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:57:46 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/20 19:08:02 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_minus_null(const char **str)
{
	int result;

	result = 1;
	while (**str == '-' || **str == '0' || **str == '+')
	{
		if (**str == '-')
			result *= -1;
		else if (**str == '0')
			result *= 2;
		else if (**str == '+')
			result *= 10;
		(*str)++;
	}
	return (result);
}
