/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:09:01 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/31 13:44:29 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// unsigned int    pgcd(unsigned int a, unsigned int b)
// {
// 	if (b == 0)
// 		return (a);
// 	return (pgcd(b, (a % b)));
// }

// unsigned int	lcm(unsigned int a, unsigned int b)
// {
// 	if (a == 0 || b == 0)
// 		return (0);
// 	unsigned int	n;
// 	unsigned int	c;
// 	n = pgcd(a, b);
// 	c = a / n;
// 	return (c * b);
// }

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	unsigned int	n;
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		unsigned int m = lcm(atoi(av[1]), atoi(av[2]));
// 		printf("LCM: %u\n", m);
// 	}
// }
