#include "libftprintf.h"

char		*ft_char_to_str(char c)
{
	char	*array;

	if (c != '\0')
	{
		if (!(array = malloc(sizeof(char) * 2)))
			return (NULL);
		array[0] = c;
		array[1] = '\0';
	}
	else
	{
		if (!(array = malloc(sizeof(char))))
			return (NULL);
		array[0] = '\0';
	}
	return (array);
}
