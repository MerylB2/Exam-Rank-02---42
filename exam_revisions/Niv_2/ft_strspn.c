/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:49:52 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 16:14:46 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t j;
    size_t check;

    i = 0;
    while (s[i])
    {
        j = 0;
        check = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                check = 1;
            j++;
        }
        if (check == 0)
            return (i);
        i++;
    }
    return (i);
}


/*Dans ce cas s'apres ma comprehension, accept va aller compter le nombre 
d'element en son sein que l'on va retrouver dans s (peu importe le nombre 
de fois qu'un element de s apparait dans accept ou selon l'index du premier elmt de s
qui doit aqppartenir a accept dans ce cas check = 1 sinon check = 0)*/
#include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc == 3)
//         printf("ft_strspn(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], ft_strspn(argv[1], argv[2]));
//     return(0);
// }

int main()
{
	char *s = "merylhelo";
	const char *accept = "erelomf";
	printf("%zu\n", ft_strspn(s, accept));
}