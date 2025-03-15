/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:09:47 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/14 16:33:06 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>

int is_sep(int c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}

int main(int ac, char **av)
{
    int start, end;
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
            i++;
        while(i >= 0)
        {
            while(is_sep(av[1][i]))
                i--;
            end = i;
            while(av[1][i] && !(is_sep(av[1][i])))
                i--;
            start = i + 1;
            int flag = start;
            while(start <= end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
            if (flag)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}