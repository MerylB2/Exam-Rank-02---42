/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:53:11 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/13 00:03:12 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int nb)
{
	int	prime;

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

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (1);
}