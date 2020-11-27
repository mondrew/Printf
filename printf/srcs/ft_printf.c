/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 21:31:36 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/18 21:19:44 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	counter;

	counter = 0;
	va_start(ap, str);
	while (*str != '\0' && str != NULL)
	{
		while (*str != '%' && *str != '\0')
		{
			ft_putchar_fd(*str, 1);
			str++;
			counter++;
		}
		if (*str == '%')
		{
			str++;
			ft_analyze_that(&str, &ap, &counter);
		}
		if (*str != '\0')
			str++;
	}
	va_end(ap);
	return (counter);
}
