#include "libftprintf.h"

static void	ft_add_0x(char **hex)
{
	(*hex)[0] = '0';
	(*hex)[1] = 'x';
}

char		*ft_dtoh_ptr(size_t nbr, int flag)
{
	int		i;
	size_t	tmp;
	int		power;
	char	*hex;

	i = 2;
	power = ft_count_power(nbr);
	if ((!(hex = malloc(sizeof(char) * (power + 2 + 2)))) || nbr == 0)
		return (NULL);
	while (power >= 0)
	{
		tmp = nbr / ft_iterative_power(16, power);
		if (tmp <= 9)
			hex[i++] = tmp + 48;
		else if (tmp > 9 && flag > 0)
			hex[i++] = tmp + 55;
		else
			hex[i++] = tmp + 55 + 32;
		nbr = nbr - tmp * ft_iterative_power(16, power);
		power--;
	}
	hex[i] = '\0';
	ft_add_0x(&hex);
	return (hex);
}
