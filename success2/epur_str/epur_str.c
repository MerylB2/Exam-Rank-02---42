/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:29:41 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/13 13:40:51 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int skip_space(char *str, int i)
{
    while (str[i] == ' ' || str[i] == '\t')
        ++i;
    return (i);
}

int ft_word_len(char *str)
{
    int i = 0;
    
    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
        ++i;
    return (i);
}

void    epur_str(char *str)
{
    int i = 0;
    int f_word = 1;
    int word_len;

    i = skip_space(str, i);
    while (str[i])
    {
        if (f_word == 0)
            write(1, " ", 1);
        word_len = ft_word_len(str + i);
        write(1, str + i, word_len);
        f_word = 0;
        i = skip_space(str, i);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        epur_str(av[1]);
    write(1, "\n", 1);
    return (0);
}