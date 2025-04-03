/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:44:46 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/03 12:47:44 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    swap_val(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

void    sort_in_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int swap = 1;

    while (swap == 1)
    {
        i = 1;
        swap = 0;
        while (size > i)
        {
            if (tab[i - 1] > tab[i])
            {
                swa
            }
        }
    }
}
