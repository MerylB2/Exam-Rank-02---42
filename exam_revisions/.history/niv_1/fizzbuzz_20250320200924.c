/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:55:24 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/20 20:09:23 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	*str;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	str = nbr % 10 + '0';
	write(1, &str, 1);
}

int main(void)
{
	int i = 0;
	while (i >= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, )
	}
}