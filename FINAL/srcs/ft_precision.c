/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:58:16 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/17 18:29:40 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_precision(const char **str, va_list *ptr)
{
	int	result;

	result = -1;
	if (**str == '.')
	{
		result = -2;
		(*str)++;
		if (**str >= '0' && **str <= '9')
			result = ft_atoi(*str);
		else if (**str == '*')
			result = va_arg(*ptr, int);
		while ((**str >= '0' && **str <= '9') || **str == '*')
			(*str)++;
	}
	return (result);
}
