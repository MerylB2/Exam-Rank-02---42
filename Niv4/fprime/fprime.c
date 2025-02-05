/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:28:43 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/05 16:42:53 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	ft_prime(int nb)
{
	static int	prime;

	prime = 2;
	if (nb == 1)
	{
		printf("1");
		return ;
	}
	while (prime <= nb)
	{
		if ((nb % prime) == 0)
		{
			printf("%d", prime);
			if (nb != prime)
				printf("*");
			nb /= prime;
		}
		else
			prime++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_prime(atoi(av[1]));
	printf("\n");
	return (1);
}
