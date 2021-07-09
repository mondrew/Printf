#include "libftprintf.h"

char	*ft_check_precision_str(char **array, int prec)
{
	int		par_len;
	char	*new_array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_array = *array;
	par_len = ft_strlen(*array);
	if (prec == -2)
		prec = 0;
	if (par_len > prec)
	{
		if (!(new_array = malloc(sizeof(char) * (prec + 1))))
			return (NULL);
		while (i < prec)
			new_array[i++] = (*array)[j++];
		new_array[i] = '\0';
	}
	return (new_array);
}
