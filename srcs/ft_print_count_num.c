#include "libftprintf.h"

static int	ft_pcn2(char **to_print, int min_nul, int diff, int precision)
{
	int		counter;

	counter = 0;
	while (min_nul > 0 && diff-- > 0)
	{
		if ((min_nul == 2 || min_nul == 20) && precision == -1)
		{
			if (**to_print == '-' || **to_print == '+')
			{
				ft_putchar_fd(**to_print, 1);
				(*to_print)++;
				counter++;
			}
			ft_putchar_fd('0', 1);
		}
		else
			ft_putchar_fd(' ', 1);
		counter++;
	}
	return (counter);
}

int			ft_print_count_num(char *to_print, int min_nul, int mfw, \
		int precision)
{
	int diff;
	int counter;
	int i;

	counter = 0;
	i = 0;
	if ((precision == 0 || precision == -2) && ft_atoi(to_print) == 0)
	{
		if (to_print[i] == '-' || to_print[i] == '+')
			i++;
		to_print[i] = '\0';
	}
	diff = mfw - ft_strlen(to_print);
	counter = ft_pcn2(&to_print, min_nul, diff, precision);
	ft_putstr_fd(to_print, 1);
	while (min_nul < 0 && diff > 0)
	{
		ft_putchar_fd(' ', 1);
		counter++;
		diff--;
	}
	return (counter + ft_strlen(to_print));
}
