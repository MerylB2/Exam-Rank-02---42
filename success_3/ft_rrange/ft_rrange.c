/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:03:32 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/10 20:29:51 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*rrange;

	i = 0;
	len = (end - start) < 0 ? ((end - start)* -1) + 1 : (end - start) + 1;
	rrange = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		if (end < start)
		{
			rrange[i] = end++;
			i++;
		}
		else
		{
			rrange[i] = end--;
			i++;
		}
	}
	return (rrange);
}