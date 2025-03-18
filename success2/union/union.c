/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:38:00 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/06 14:27:25 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int	ascii_tab[256] = {0};
	int	c;

	while (*s1 != '\0')
	{
		c = *s1;
		if (ascii_tab[c] == 0)
		{
			write(1, s1, 1);
			ascii_tab[c] = 1;
		}
		++s1;
	}
	while (*s2 != '\0')
	{
		c = *s2;
		if (ascii_tab[c] == 0)
		{
			write(1, s2, 1);
			ascii_tab[c] = 1;
		}
		++s2;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
