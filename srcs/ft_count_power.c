#include "libftprintf.h"

int		ft_count_power(size_t nbr)
{
	int	power;

	power = 0;
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		power++;
	}
	return (power);
}
