/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:56:01 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 13:12:07 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	Is_Upper(int c)
{
	if(c >= 65 && c <= 90)
		c += 32;
	return (c);
}

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				{
					av[1]
				}
				write(1, "_", 1);
		}
		ft_putchar(av[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}