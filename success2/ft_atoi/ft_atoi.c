/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 10:43:16 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/15 11:17:10 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
        res = res * 10 + (str[i++] - '0');
    return (res * sign);
}

// int main(void)
// {  
//     printf("%d\n", ft_atoi("-13268"));
//     printf("%d\n", atoi("-13268"));
    
// }