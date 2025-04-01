/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:29:53 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 19:37:54 by asiatik          ###   ########.fr       */
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
    printf("%c\n", ft_putstr(bonjour!));
    return (0);
}
