/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 00:48:24 by asiatik           #+#    #+#             */
/*   Updated: 2025/01/02 01:02:48 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	start;
	int	end;
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			int	flag;
			flag = start;
			while (start <= end)
			{
				write(1, &av[1][start], 1);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
