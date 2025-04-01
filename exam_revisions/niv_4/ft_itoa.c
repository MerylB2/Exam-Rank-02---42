#include <stdlib.h>

int get_len(int n)
{
	int len = 0;

	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	long	n;
	int		len;

	n = nbr;
	len = get_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	else if (n == 0)
		res[0] = '0';
	while (n < 0)
	{
		len--;
		res[len] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}