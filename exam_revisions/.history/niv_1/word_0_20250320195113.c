/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:46:12 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 19:51:12 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_sep(char s)
{
    return (s == ' ' || s == '\t' || s == '\n');
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while(av[1][i] && is_sep(av[1][i]))
            i++;
        while(av[1][i] && !is_sep(av[1][i]))
        {
            write(1, )
        }
    }
    write(1, "\n", 1);
    return (0);
}