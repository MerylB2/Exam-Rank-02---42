/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:42:25 by asiatik           #+#    #+#             */
/*   Updated: 2025/02/05 16:08:41 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int *range;

	i = 0;
	len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
	range = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		if (start < end)
		{
			range[i] = start++;
			i++;
		}
		else
		{
			range[i] = start--;
			i++;
		}
	}
	return (range);
}