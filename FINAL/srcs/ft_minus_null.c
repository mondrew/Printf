#include "libftprintf.h"

int		ft_minus_null(const char **str)
{
	int result;

	result = 1;
	while (**str == '-' || **str == '0' || **str == '+')
	{
		if (**str == '-')
			result *= -1;
		else if (**str == '0')
			result *= 2;
		else if (**str == '+')
			result *= 10;
		(*str)++;
	}
	return (result);
}
