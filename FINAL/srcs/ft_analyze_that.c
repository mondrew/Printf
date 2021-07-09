#include "libftprintf.h"

static char	*ft_check_pn(const char **str, va_list *ptr, size_t *counter)
{
	int		*n;
	char	*new_array;

	new_array = NULL;
	if (**str == '%')
	{
		if (!(new_array = ft_strdup("%")))
			return (NULL);
	}
	if (**str == 'n')
	{
		if (!(n = va_arg(*ptr, int *)))
			return (NULL);
		*(va_arg(*ptr, int *)) = *((int *)counter);
	}
	return (new_array);
}

void		ft_analyze_that(const char **str, va_list *ptr, size_t *counter)
{
	int		min_nul;
	int		mfw;
	int		precision;
	char	*to_print;

	min_nul = ft_minus_null(str);
	mfw = ft_min_field_width(str, ptr);
	precision = ft_precision(str, ptr);
	if (**str == '\0')
		return ;
	if (**str == '%' || **str == 'n')
	{
		if (!(to_print = ft_check_pn(str, ptr, counter)))
			return ;
	}
	else
		to_print = ft_create_str(str, ptr, precision, min_nul);
	if (to_print == NULL)
		to_print = ft_print_null(**str, precision);
	if (**str == 'c' || **str == 's' || **str == 'p')
		*counter = *counter + ft_print_count_str(**str, to_print, min_nul, mfw);
	else
		*counter = *counter + ft_print_count_num(to_print, min_nul, mfw, \
				precision);
}
