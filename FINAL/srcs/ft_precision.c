#include "libftprintf.h"

int		ft_precision(const char **str, va_list *ptr)
{
	int	result;

	result = -1;
	if (**str == '.')
	{
		result = -2;
		(*str)++;
		if (**str >= '0' && **str <= '9')
			result = ft_atoi(*str);
		else if (**str == '*')
			result = va_arg(*ptr, int);
		while ((**str >= '0' && **str <= '9') || **str == '*')
			(*str)++;
	}
	return (result);
}
