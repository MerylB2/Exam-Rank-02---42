/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 09:58:09 by asiatik           #+#    #+#             */
/*   Updated: 2025/04/03 12:20:55 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int main(int ac, char **av)
// {
//     int i = 0;
//     if (ac == 2)
//     {
//         while (av[1][i])
//             i++;
//         i--;
//         while(av[1][i] > 32)
//             i--;
//         i++;
//         while(av[1][i] && av[1][i] != ' ')
//             write(1, &av[1][i++], 1);
//     }
//     write(1, "\n", 1);
// }

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i--;
        while (av[1][i] > 32 && i != 0)
            i--;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][i] && av[1][i] != ' ')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}