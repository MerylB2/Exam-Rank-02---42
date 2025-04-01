/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 03:40:34 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/26 03:50:49 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char	swap;

	while (str[len])
		len++;
	i = -1;
	while (++i < --len)
	{
		swap = str[i];
		str[i] = str[len];
		str[len] = swap;
	}
	return (str);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_strrev(av[1]));
	return (0);
}