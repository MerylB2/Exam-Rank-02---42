/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 23:34:07 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/13 23:48:38 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    fprime(int n)
{
    int prime = 2;
    if (n == 1)
        printf("1");
    while (n >= prime)
    {
        if ((n % prime) == 0)
        {
            printf("%d", prime);
            if (n != prime)
                printf("*");
            n /= prime;
        }
        else
            prime++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        fprime(atoi(av[1]));
    printf("\n");
    return (0);
}