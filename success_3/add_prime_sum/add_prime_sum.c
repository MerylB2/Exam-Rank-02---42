/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 03:14:58 by asiatik           #+#    #+#             */
/*   Updated: 2024/12/24 03:52:12 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	n = 0;
	int	i = 0;
	int	sum = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] < '0' || av[1][i] > '9')
				exit(1);
			n = n * 10 + (av[1][i++] - '0');
		}
		i = 2;
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	if (ac != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
