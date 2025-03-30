/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:40:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 13:50:19 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int repeat;
    int alpha;

    alpha = 0;
    if (ac == 2)
    {
        while(av[1][alpha])
        {
            repeat = 1;
            if (av[1][alpha] >= 'A' && av[1][alpha] <= 'Z')
                repeat = av[1][alpha] - 'A';
            else if (av[1][alpha] >= 'a' && av[1][alpha] <= 'z')
                repeat = av[1][alpha] - 'a';
            while (repeat)
            {
                write(1, )
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}