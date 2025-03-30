/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:10:42 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/30 14:25:24 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_sep(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}

int is_validbase(char c, int base)
{
    char    *l_base = "0123456789abcdef";
    char    *u_base = "0123456789ABCDEF";

    while(base--)
    {
        if (l_base[base] == c || u_base[base] == c)
            return (1);
    }
    return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;

    while (is_sep(*str))
        str++;
    sign = (*str == '-') ? -1 : 1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str && is_validbase(*str, str_base))
    {
        res *= str_base;
        if (*str >= '0' && *str <= '9')
            res += *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            res += *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            res += *str - 'A' + 10;
        str++; 
    }
    return (res * sign);
}
