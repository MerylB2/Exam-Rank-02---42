/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:46:03 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/14 15:59:16 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    pgcd(int n1, int n2)
{
    int i;
    i = n1;
    while (i > 0)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            printf("%d", i);
            return ;
        }
        --i;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        pgcd(atoi(av[1]), atoi(av[2]));
    printf("\n");
    return (0);
}