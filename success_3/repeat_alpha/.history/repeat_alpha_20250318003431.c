/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:22:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/18 00:34:31 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int alpha = 0;
    int repeat;
    
    if (ac == 2)
    {
        while (av[1][i])
        {
            repeat = 1;
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                repeatav[1][i] = av[3][0];
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
