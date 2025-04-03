/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:44:46 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/03 12:50:44 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    swap_val(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

void    sort_int_tab(int *tab, unsigned int size)
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
                swap_val(&tab[i -1], &tab[i]);
                swap = 1;
            }
            i++;
        }
    }
}

#include <stdio.h>

void	print_arr(int *tab, unsigned int size)
{
	unsigned int i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		++i;
	}
	printf("\n");
}

int		main(void)
{
	int tab[] = { 5, -4, 3, -2, 1, 0 };
	unsigned int size = sizeof(tab) / sizeof(*tab);

	print_arr(tab, size);
	sort_int_tab(tab, size);
	print_arr(tab, size);
}