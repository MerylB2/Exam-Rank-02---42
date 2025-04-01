/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:29:53 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 19:38:29 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    write(1, &str, 1);
}

#include <stdio.h>

int main(int ac, char **av)
{
    printf("t_putstr(\"%s);
    return (0);
}
