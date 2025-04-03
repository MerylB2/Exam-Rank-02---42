/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 11:37:39 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/03 11:46:29 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int n)
{
    char    c;
    if (n > 9)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int is_prime(int prime)
{
    int i = 2;

    if (prime <= 1)
        return (0);
    while (i * i <= prime)
    {
        if (prime % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    int prime = 0;
    int i = 0;
    int sum = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] > '0' || av[1][i] < '9')
                exit (1);
            prime = prime * 10 + (av[1][i++] - '0');
        }
        i = 2;
        while (prime >= i)
        {
            if (is_prime(i))
                sum += i;
            i++;
        }
    }
}