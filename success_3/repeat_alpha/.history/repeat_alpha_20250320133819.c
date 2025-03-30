/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:40:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 13:38:19 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int k;
	char *str;

	i = 0;
	k = 1;
	if (ac ==2)
	{
		str = av[1];
		while (str[i] != '\0')
		{
			k = 1;
			if (str[i] >= 'A' && str[i] <= 'Z')
				k = str[i] - 64;
			if (str[i] >= 'a' && str[i] <= 'z')
				k = str[i] - 96;
			while (k >= 1)
			{
				write(1, &str[i], 1);
				k--;
			}
			i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}