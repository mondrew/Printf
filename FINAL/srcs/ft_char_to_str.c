/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 14:55:51 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/19 19:37:13 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_char_to_str(char c)
{
	char	*array;

	if (c != '\0')
	{
		if (!(array = malloc(sizeof(char) * 2)))
			return (NULL);
		array[0] = c;
		array[1] = '\0';
	}
	else
	{
		if (!(array = malloc(sizeof(char))))
			return (NULL);
		array[0] = '\0';
	}
	return (array);
}
