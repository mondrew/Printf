/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:57:46 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/20 21:54:14 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_minus_null(const char **str)
{
	int result;
	int	flag_null;
	int	flag_plus;

	result = 1;
	flag_null = 0;
	flag_plus = 0;
	while (**str == '-' || **str == '0' || **str == '+')
	{
		if (**str == '-' && result > 0)
			result *= -1;
		else if (**str == '0' && flag_null != 1)
		{
			result *= 2;
			flag_null = 1;
		}
		else if (**str == '+' && flag_plus != 1)
		{
			result *= 10;
			flag_plus = 1;
		}
		(*str)++;
	}
	return (result);
}
