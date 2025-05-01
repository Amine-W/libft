/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:23:01 by amwahab           #+#    #+#             */
/*   Updated: 2025/05/01 12:46:44 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	count_words(const char *str, char charset)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i])
		{
			word_count++;
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
	}
	return (word_count);
}

static char	*allocate_word(const char *s, int start, int len)
{
	char	*word;
	int		k;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	k = 0;
	while (k < len)
	{
		word[k] = s[start + k];
		k++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		i ;
	int		word_count;
	int		word_index;
	int		start;
	char	**result;

	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	word_index = 0;
	while (s[i])
	{
		while (s[i] && is_charset(s[i], c))
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && !is_charset(s[i], c))
				i++;
			result[word_index] = allocate_word(s, start, i - start);
			if (!result[word_index])
				return (NULL);
			word_index++;
		}
	}
	result[word_index] = NULL;
	return (result);
}
