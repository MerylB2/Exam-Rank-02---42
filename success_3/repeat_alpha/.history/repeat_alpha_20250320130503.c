/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:40:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 13:05:03 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int get_alpha_index(char str)
{
    if (str >= 'a' && str <= 'z')
        return (str - 'a' + 1); 
    else if (str >= 'A' && str <= 'Z')
        return (str - 'A' + 1);
    return (1);
}

int main(int ac, char **av)
{
    int repeat;
    int alpha;

    alpha = 0;
    if (ac == 2)
    {
        whilw(av[1][alpha])
        {
            repeat = 1;
            repeat = get_alpha_index(av[1][alpha]);
            while(repeat)
            
        }
    }
    write(1, "\n", 1);
    return (0);
}