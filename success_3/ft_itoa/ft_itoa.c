/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:12:24 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/30 17:25:52 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;
	long	n;

	n = nbr;
	len = get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

// #include <stdio.h>
// #include <limits.h>

// int		main(void)
// {
// 	int d = INT_MIN;
// 	printf("%d =? %s\n", d, ft_itoa(d));

// 	d = -13;
// 	printf("%d =? %s\n", d, ft_itoa(d));

// 	d = 0;
// 	printf("%d =? %s\n", d, ft_itoa(d));

// 	d = 5;
// 	printf("%d =? %s\n", d, ft_itoa(d));

// 	d = INT_MAX;
// 	printf("%d =? %s\n", d, ft_itoa(d));
// }