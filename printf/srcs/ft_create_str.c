/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:56:42 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/18 20:38:50 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_create_str(const char **str, va_list *ptr, int prec, int min_nul)
{
	char	*array;

	if (**str == 'c')
		array = ft_char_to_str((char)va_arg(*ptr, int));
	else if (**str == 's')
		array = va_arg(*ptr, char *);
	else if (**str == 'p')
		array = ft_dtoh_ptr((size_t)va_arg(*ptr, void *), 0);
	else if (**str == 'd' || **str == 'i')
		array = ft_ltoa(va_arg(*ptr, int), min_nul, 1);
	else if (**str == 'u')
		array = ft_ltoa(va_arg(*ptr, unsigned int), min_nul, 0);
	else if (**str == 'x')
		array = ft_dtoh(va_arg(*ptr, unsigned int), 0);
	else if (**str == 'X')
		array = ft_dtoh(va_arg(*ptr, unsigned int), 1);
	if (prec != -1 && array != NULL)
	{
		if (**str != 'c' && **str != 'p' && **str != 's')
			array = ft_check_precision_num(&array, prec);
		else if (**str == 's')
			array = ft_check_precision_str(&array, prec);
	}
	return (array);
}
