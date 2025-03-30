/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:22:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/18 00:27:04 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    
    if (ac )
    while (av[1][i] && av[2][1] == 0 && av[3][1] == 0)
    {
        if (av[1][i] == av[2][0])
            av[1][i] = av[3][0];
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
