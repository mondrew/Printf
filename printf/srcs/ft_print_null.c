/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:45:25 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/20 16:17:14 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_print_null(char c, int precision)
{
	char *str;

	if (precision == -1)
		precision = 6;
	if (precision == -2)
		precision = 0;
	if (c == 's')
	{
		if (!(str = ft_substr("(null)", 0, (size_t)precision)))
			return (NULL);
	}
	if (c == 'p')
	{
		if (!(str = ft_strdup("0x0")))
			return (NULL);
	}
	return (str);
}
