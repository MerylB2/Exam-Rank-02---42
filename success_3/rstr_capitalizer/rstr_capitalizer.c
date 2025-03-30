/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 09:59:30 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/13 10:24:22 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_sep(int s)
{
	return (s == ' ' || s == '\t' || s == '\0');
}

void	rstr_capitalizer(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && is_sep(s[i + 1]))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}

}
int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (ac > 1)
		{
			rstr_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}