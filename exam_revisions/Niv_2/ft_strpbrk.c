/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:38:59 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 17:04:49 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}

/* Il cherche le premier caractere d'une chaine s1 qui correspond a l'un des
caracteres d'un ensemble s2 */
#include <stdio.h>

int main()
{
    char str[] = "hello world";
    char accept[] = "w o";
    
    char *res = ft_strpbrk(str, accept);
    if (res)
        printf("Premier caractère trouvé : %c\n", *res);
    else
        printf("Aucun caractère trouvé.\n");

    return 0;
}