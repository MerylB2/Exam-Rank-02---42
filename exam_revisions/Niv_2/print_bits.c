/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:45:57 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/27 14:51:34 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    unsigned char bit;
    int i = 8;

    bit = 0;
    while(i--)
    {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
    }
}

int main()
{
    unsigned char octet = 2;
    print_bits(octet);
}