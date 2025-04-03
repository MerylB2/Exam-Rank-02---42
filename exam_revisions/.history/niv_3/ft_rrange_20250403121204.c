/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:09:37 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/03 12:12:04 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
    int len;
    int *rrange;

    len = (end - start) < 0 ? ((end - start)* -1) + 1 : (end - start) + 1;
    rrange = (int *)malloc(sizeof(int) * len);
    while (i < len)
    {
        if (end < star)
    }
}