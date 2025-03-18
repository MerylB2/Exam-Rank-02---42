/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asiatik <asiatik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:18:41 by asiatik           #+#    #+#             */
/*   Updated: 2025/01/02 13:40:14 by asiatik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isdelimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_isdelimiter(*str))
			str++;
		if (*str && !ft_isdelimiter(*str))
		{
			count++;
			while (*str && !ft_isdelimiter(*str))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	int	i;
	char	*word;

	i = 0;
	while (str[i] && !ft_isdelimiter(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (1 + i));
	i = 0;
	while (str[i] && !ft_isdelimiter(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**tab = (char **)malloc(sizeof(char *) * (count_words(str) + 1));

	int i = 0;
	while (*str)
	{	while (*str && ft_isdelimiter(*str))
			str++;
		if (*str && !ft_isdelimiter(*str))
		{
			tab[i] = malloc_word(str);
			i++;
			while (*str && !ft_isdelimiter(*str))
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
