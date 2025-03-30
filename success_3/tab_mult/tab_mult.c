/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:36:51 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/30 17:07:58 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res = 0;
	int	sign = 1;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str) - '0';
		++str;
	}
	return (res * sign);
}

void   ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	   ft_putnbr(n / 10);
   ft_putchar(n % 10 + '0');
}

void    tab_mult(char *str)
{
    int n;
    int i = 1;

    n = ft_atoi(str);
    while (i <= 9)
    {
       ft_putnbr(i);
        write(1, " x ", 3);
       ft_putnbr(n);
        write(1, " = ", 3);
       ft_putnbr(n * i);
        write(1, "\n", 1);
        ++i;
    }
}

int	main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
