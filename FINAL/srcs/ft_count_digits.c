int		ft_count_digits(long long nbr)
{
	int digits;

	digits = 0;
	if (nbr < 0)
	{
		digits++;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		digits++;
	}
	digits++;
	return (digits);
}
