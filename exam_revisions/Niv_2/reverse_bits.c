/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:52:48 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/27 15:07:22 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
    // unsigned int i;
    // unsigned char res = 0;

    // i = 8;
    // while(i--)
    // {
    //     res = (res << 1) | (octet & 1);
    //     octet = octet >> 1;
    // }
    // return (res);
    return ((((octet >> 0) & 1) << 7) | \
            (((octet >> 1) & 1) << 6) | \
            (((octet >> 2) & 1) << 5) | \
            (((octet >> 3) & 1) << 4) | \
            (((octet >> 4) & 1) << 3) | \
            (((octet >> 5) & 1) << 2) | \
            (((octet >> 6) & 1) << 1) | \
            (((octet >> 7) & 1) << 0));
}

#include <stdio.h>
// If you want to test the code:
int	main(void)
{
	unsigned char bit = 0;
	// by changing the number on the next line, you change
	// the bits that are sent to the reverse_bits function
	// 5 => 0000 0101, the result should be 1010 0000
	unsigned char res = reverse_bits((unsigned char)1);

	int i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}
