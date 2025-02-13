/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:15:53 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/13 14:08:53 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int		max(int *tab, unsigned int len)
{
	int max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
	{
		if(tab[len] > max)
			max = tab[len];		
	}
	return (max);
}

// int	main(void)
// {
// 	int	nu[]= {-1, 7, 9, -2};
// 	printf ("%d\n", max(nu, 4));
// 	return (0);
// }