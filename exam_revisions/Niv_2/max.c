/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:42:31 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/27 14:44:57 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int tab, unsigned int len)
{
    int maxi;

    if (!len)
        return (0);
    maxi = tab[--len];
    while(len--)
    {
        if (tab[len] > maxi)
            maxi = tab[len];
    }
    return (maxi);
}