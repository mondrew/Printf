#include "libftprintf.h"

size_t		ft_iterative_power(size_t nb, int power)
{
	size_t	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- > 1)
		res = res * nb;
	return (res);
}
