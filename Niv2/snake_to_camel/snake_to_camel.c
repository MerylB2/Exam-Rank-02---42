/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:33:55 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/04 18:43:14 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	toUpper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(int ac, char **av)
{
	int	i;

	i = 0;
	if ( ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == '_')
				ft_putchar(toUpper(av[1][++i]));
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
