/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_count_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:00:22 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/20 18:54:15 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_checklen(char c, char *to_print)
{
	if (ft_strlen(to_print) == 0 && c == 'c')
		return (1);
	else
		return (ft_strlen(to_print));
}

int			ft_print_count_str(char c, char *to_print, int min_nul, int mfw)
{
	int diff;
	int	counter;

	counter = 0;
	diff = mfw - ft_strlen(to_print);
	if (ft_strlen(to_print) == 0 && c == 'c')
		diff--;
	while (diff > 0 && min_nul > 0)
	{
		ft_putchar_fd(' ', 1);
		diff--;
		counter++;
	}
	if (c == 'c')
		write(1, to_print, 1);
	else
		ft_putstr_fd(to_print, 1);
	while (diff > 0 && min_nul < 0)
	{
		ft_putchar_fd(' ', 1);
		diff--;
		counter++;
	}
	return (counter + ft_checklen(c, to_print));
}
