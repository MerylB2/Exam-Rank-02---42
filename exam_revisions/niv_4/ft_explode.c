#include <stdlib.h>

int	is_sep(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	count_words(char *word)
{
	int count = 0;

	while (*word)
	{
		while (*word && is_sep(*word))
			word++;
		if (*word && !is_sep(*word))
		{
			count++;
			while (*word && !is_sep(*word))
				word++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	int	i = 0;
	char	*word;

	while (str[i] && !is_sep(str[i]))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !is_sep(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_explode(char *str)
{
	int 	i = 0;
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		if (*str && !is_sep(*str))
		{
			tab[i] = malloc_word(str);
			i++;
			while (*str && !is_sep(*str))
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}


/* Pour malloc_word ou dup, on peut aussi l'ecrire ainsi :*/

// int	get_len(char *s)
// {
// 	int i = 0;
// 	while (s[i] && !is_sep(s[i]))
// 		i++;
// 	return (i);
// }

// char	*malloc_word(char *str)
// {
// 	int	i = 0;
// 	char	*word;
// 	int		len;

// 	len = get_len(str);
// 	word = (char *)malloc(sizeof(char) * (len + 1));
// 	word[len] = '\0';
// 	while (i < len)
// 	{
// 		word[i] = str[i];
// 		i++;
// 	}
// 	return (word);
// }


/* MAIN */

// #include <stdlib.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	char	**split;
// 	int	 i = 0;

// 	if (argc == 2)
// 	{
// 		split = ft_explode(argv[1]);
// 		while (split[i])
// 		{
// 			printf("%s\n", split[i]);
// 			i++;
// 		}
// 		printf("%s", split[i]);
// 	}
// 	printf("\n");
//     return (0);
// }