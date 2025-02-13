/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:20:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/12 23:47:55 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_sep(int s)
{
	return (s == '\t' || s == '\0' || s == ' ');
}

void	str_capitalizer(char *s)
{
	int	i;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	write(1, &s[i], 1);
	while (s[++i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && is_sep(s[i - 1]))
			s[i] -= 32;
		write(1, &s[i], 1);
	}
}

int main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		while (ac > 1)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
		
	}
	return (0);
}
