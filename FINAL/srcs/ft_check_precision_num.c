#include "libftprintf.h"

static void	ft_cpn2(char **array, char **new_array, int prec, int par_len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((*array)[j] == '-' || (*array)[j] == '+')
	{
		(*new_array)[i++] = (*array)[j++];
		par_len--;
	}
	if (i == 1)
	{
		while (i <= prec - par_len)
			(*new_array)[i++] = '0';
	}
	else
	{
		while (i < prec - par_len)
			(*new_array)[i++] = '0';
	}
	while ((*array)[j] != '\0')
		(*new_array)[i++] = (*array)[j++];
	(*new_array)[i] = '\0';
}

char		*ft_check_precision_num(char **array, int prec)
{
	int		par_len;
	char	*new_array;

	new_array = *array;
	par_len = ft_strlen(*array);
	if (par_len < prec)
	{
		if (!(new_array = malloc(sizeof(char) * (prec + 1))))
		{
			free(*array);
			return (NULL);
		}
		ft_cpn2(array, &new_array, prec, par_len);
		free(*array);
	}
	return (new_array);
}
