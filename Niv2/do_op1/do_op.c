/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:42:09 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/12 23:15:16 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		if (av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		if (av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		if (av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		if (av[2][0] == '%')
			printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
	return (0);
}