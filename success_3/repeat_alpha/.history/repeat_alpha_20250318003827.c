/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:22:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/18 00:38:26 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int alpha = 0;
    int repeat;
    
    if (ac == 2)
    {
        while (av[1][alpha])
        {
            repeat = 1;
            if (av[1][alpha] >= 'A' && av[1][alpha] <= 'Z')
                repeat = av[1][alpha] - 'A';
            if (av[1][alpha] >= 'a' && av[1][alpha] <= 'z')
                repeat = av[1][alpha] - 'a';
            while (repeat)
            {
                write(1, &av[1][alpha], 1);
                repeat;
            }
            alpha++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
