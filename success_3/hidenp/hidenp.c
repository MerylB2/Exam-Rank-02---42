/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:53:50 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/18 01:12:26 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

void	hidenp(char *probe, char *target)
{
	while (*probe != '\0')
	{
		while (*probe != *target && *target != '\0')
			++target;
		if (*target == '\0')
		{
			write(1, "0", 1);
			return;
		}
		++target;
		++probe;
	}
	write(1, "1", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}