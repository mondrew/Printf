/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_field_width.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:57:16 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/20 21:52:32 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_min_field_width(const char **str, va_list *ptr)
{
	int result;

	result = 0;
	if (**str >= '0' && **str <= '9')
		result = ft_atoi(*str);
	else if (**str == '*')
		result = va_arg(*ptr, int);
	while ((**str >= '0' && **str <= '9') || **str == '*')
		(*str)++;
	return (result);
}
