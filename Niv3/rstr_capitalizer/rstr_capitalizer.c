/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:34:52 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/06 15:11:05 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\0');
}

void	rstr_capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && isspace(s[i + 1]))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int i;
	
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < ac)
		{
			rstr_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
