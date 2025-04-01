#include <stdlib.h>

int	is_sep(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	count_words(char *str)
{
	int	count = 0;

	while (*str && is_sep(*str))
		str++;
	while (*str)
	{
		if (*str && !is_sep(*str))
		{
			count++;
			while (*str && !is_sep(*str))
				str++;
		}
	}
	return (count);
}

char	*dup_word(char *str)
{
	int		i = 0;
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

char	**ft_split(char *str)
{
	int		i = 0;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (count_words(str) + 1));
	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		if (*str && !is_sep(*str))
		{
			split[i] = dup_word(str);
			i++;
			while (*str && !is_sep(*str))
				str++;
		}
	}
	split[i] = NULL;
	return (split);
}