/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:56:01 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 13:15:17 by asiatik          ###   ########.fr       */
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
			if (Is_Upper(av[1]))
				{
					av[1][i] += 32;
					write(1, "_", 1);
				}
				ft_putchar(av[1][i]);
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}