/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:40:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 13:47:24 by asiatik          ###   ########.fr       */
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
           if (av[1][alpha] >= 'A' && av[1][alpha] <= 'Z')
            repeat = av[1][alp]
        }
    }
    write(1, "\n", 1);
    return (0);
}