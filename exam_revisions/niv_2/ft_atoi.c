/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:51:56 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 14:12:34 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while((str[i] <= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("ft_atoi(\"%s\") = %d\n", argv[1], ft_atoi(argv[1]));
        printf("atoi(\"%s\") = %d\n", argv[1], atoi(argv[1]));
    }
    return(0);
}