/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:38:51 by asiatik           #+#    #+#             */
/*   Updated: 2025/03/25 14:59:46 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
// 		i++;
// 	return (s1[i] - s2[i]);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	printf("Original vs Clone: <%d> <%d>", strcmp("hello World", "hello world") , ft_strcmp("hello World", "hello world"));
	printf("\nOriginal vs Clone: <%d> <%d>", strcmp("hello World", "") , ft_strcmp("hello World", ""));

}