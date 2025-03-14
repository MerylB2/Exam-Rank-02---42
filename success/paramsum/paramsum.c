/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 23:09:26 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/13 23:25:28 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int n)
{
    char    str;
    if (n > 9)
        ft_putnbr(n / 10);
    str = (n % 10) + '0';
    write(1, &str, 1);
}

int main(int ac, char **av)
{
    (void)av;
    
    if (ac < 2)
        write(1, "0", 1);
    else
        ft_putnbr(ac - 1);
    write(1, "\n", 1);
    return (0);
}
