/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:41:13 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/17 14:41:48 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_digits(long long nbr)
{
	int digits;

	digits = 0;
	if (nbr < 0)
	{
		digits++;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		digits++;
	}
	digits++;
	return (digits);
}
