/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:42:18 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/18 13:24:00 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_check_plus(char **str, int min_nul, int flag)
{
	char	*new_array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_array = *str;
	if ((min_nul > 9 || min_nul < -9) && flag == 1 && **str != '-')
	{
		if (!(new_array = malloc(sizeof(char) * (ft_strlen(*str) + 2))))
		{
			free(*str);
			return (NULL);
		}
		new_array[i++] = '+';
		while ((*str)[j] != '\0')
			new_array[i++] = (*str)[j++];
		free(*str);
		new_array[i] = '\0';
	}
	return (new_array);
}

char		*ft_ltoa(long long n, int min_nul, int flag)
{
	char	*str;
	int		digits;

	digits = ft_count_digits(n);
	if (!(str = malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	str[digits] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
	{
		str[digits - 1] = '0';
		return (ft_check_plus(&str, min_nul, flag));
	}
	while (n > 0 || (digits == 1 && n == 0 && str[digits - 1] != '-'))
	{
		str[digits-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	return (ft_check_plus(&str, min_nul, flag));
}
