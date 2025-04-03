/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:17:29 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 16:37:20 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char	*dup;

	while (src[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%s\n", ft_strdup(av[1]));
// 	}
// 	else
// 		printf("\n");
// 	return (0);
// }