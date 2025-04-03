/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:03:11 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/03 12:08:32 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i;
    int len;
    int *range;

    i = 0;
    len (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
    range = (int *)malloc(sizeof(int) * len);
    while (i < len)
    {
        if (start < end)
        {
            range[i] = start++;
            i++;
        }
        else
        {

        }
    }
}