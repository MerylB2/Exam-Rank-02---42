/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:29:53 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 19:44:19 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("ft_putstr(\"%s\")\n", av[1]);
        ft_putstr(av[1]);
    }
    ft_putstr("\n");
    return (0);
}
