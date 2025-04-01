/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:29:53 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 19:41:23 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int i = 0;
    
    write(1, &str, 1);
}

#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("t_putstr(\"%s\")\n", av[1]);
        ft_putstr(av[1]);
    }
    ft_putstr("\n");
    return (0);
}
