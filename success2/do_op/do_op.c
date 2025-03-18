/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:19:32 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/13 21:37:24 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][0] == '+')
            printf("%d", (atoi(av[1]) + atoi(av[3])));
        if (av[2][0] == '-')
            printf("%d", (atoi(av[1]) - atoi(av[3])));
        if (av[2][0] == '*')
            printf("%d", (atoi(av[1]) * atoi(av[3])));
        if (av[2][0] == '/')
            printf("%d", (atoi(av[1]) / atoi(av[3])));
        if (av[2][0] == '%')
            printf("%d", (atoi(av[1]) % atoi(av[3])));
    }
    printf("\n");
    return (0);
}