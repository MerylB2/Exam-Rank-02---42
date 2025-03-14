/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:39:11 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/14 15:21:57 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
    char    str;
    if (n > 9)
        ft_putnbr(n / 10);
    str = (n % 10) + '0';
    write(1, &str, 1);
}

int main(void)
{
   int i;

   i = 1;
   while (i <= 100)
   {
    if ((i % 3 == 0) && (i % 5 == 0))
        write(1, "fizzbuzz", 8);
    else if (i % 3 == 0)
        write(1, "fizz", 4);
    else if (i % 5 == 0)
        write(1, "buzz", 4);
    else
        ft_putnbr(i);
    i++;
    write(1, "\n", 1);
   }
}