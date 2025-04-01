/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:05:57 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 15:47:05 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j++])
                return (i);
        }
        j = 0;
        i++;
    }
    return (i);
}

/* De ma comprehension, il sera question de donne la position (via l'index)
dans le premeir arg (s), du premier element/lettre pointe (via l'index) par reject
apparaisant dans le char (s)*/

// size_t  ft_strcspn(const char *s, const char *reject)
// {
// 	size_t	i;
// 	size_t	k;

// 	i = 0;
// 	k = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (reject[k] != '\0')
// 		{
// 			if (reject[k] == s[i])
// 				return (i);
// 			k++;
// 		}
// 		k = 0;
// 		i++;
// 	}
// 	return (i);
// }

#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 3)
        printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], ft_strcspn(argv[1], argv[2]));
    return(0);
}