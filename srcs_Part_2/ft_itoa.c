#include "../includes/libft.h"

static int 	ft_size(int n)
{
	int 	i;
	int 	neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg += 1;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i + neg);
}

char *ft_itoa(int n)
{
	char 		*str;
	int 		i;
	int 		size;
	long int 	nb;

	nb = n;
	size = ft_size(nb);
	i = size;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (n < 0)
		str[0] = '-';
	if (nb < 0)
		nb *= -1;
	while (nb != 0)
	{
		str[--i] = nb % 10 + 48;
		nb /= 10;
	}
	if (n == 0)
		str[0] = '0';
	str[size + 1] = 0;
	return (str);
}