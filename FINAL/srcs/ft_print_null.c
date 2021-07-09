#include "libftprintf.h"

char	*ft_print_null(char c, int precision)
{
	char *str;

	if (precision == -1)
		precision = 6;
	if (precision == -2)
		precision = 0;
	if (c == 's')
	{
		if (!(str = ft_substr("(null)", 0, (size_t)precision)))
			return (NULL);
	}
	if (c == 'p')
	{
		if (!(str = ft_strdup("0x0")))
			return (NULL);
	}
	return (str);
}
