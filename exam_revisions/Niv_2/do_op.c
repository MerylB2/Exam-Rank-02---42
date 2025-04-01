/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:36:27 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 13:48:45 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	res = 0;

	if (ac == 4)
	{
		if (av[2][0] == '+')
			res = atoi(av[1]) + atoi(av[3]);
		if (av[2][0] == '-')
			res = atoi(av[1]) - atoi(av[3]);
		if (av[2][0] == '*')
			res = atoi(av[1]) * atoi(av[3]);
		if (av[2][0] == '/')
			res = atoi(av[1]) / atoi(av[3]);
		if (av[2][0] == '%')
			res = atoi(av[1]) % atoi(av[3]);
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}