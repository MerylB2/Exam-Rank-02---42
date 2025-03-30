/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:04:41 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/13 15:13:32 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int inter(char *str, char c, int len)
{
    int i = 0;

    while (str[i] && (i < len || len == -1))
    {
        if (str[i++] == c)
            return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    
    if (ac == 3)
    {
        while(av[1][i])
        {
            if (!inter(av[1], av[1][i], i) && inter(av[2], av[1][i], -1))
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}