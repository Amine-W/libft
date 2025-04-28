/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:23:01 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/28 11:01:24 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int is_charset(char c, char *charset)
{
	int	i;
	 
	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
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
			printf("Word_count: [%i]\n", word_count);
			while (str[i] && !is_charset(str[i], charset))
				i++;
		}
		
	}
	return(word_count);
}

char **ft_split(char *str, char *charset)
{
	int i;
	int word_count;
	int word_index;
	int start;
	char **result;
	int len;
	int k;

	i = 0;
	word_count = 0;
	word_index = 0;
	start = 0;
	len = 0;
	k = 0;

	word_count = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (result == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset)) // avancer tant qu'on est pas dans le mot, si on sort de cette boucle alors on est dans le mot
			i++;
		if (str[i])
		{
			// on est dans le mot
			start = i; // pour ne pas toucher a lindex qui parcours notre chaine de caractere on cree un nouvel index
			while (str[i] && !is_charset(str[i], charset)) // avancer dans notre mot pour savoir sa taille
				i++;
			len = i - start; //stocker la taille de notre mot pour lui allouer la bonne taille
			result[word_index] = (char *)malloc(sizeof(char) * (len + 1));
			if (result[word_index] == 0)
				return (0);
			k = 0; // reset l'index du mot a 0
			while (k < len) //remplir le mot tant qu'on a pas atteint sa taille
			{
				result[word_index][k] = str[start + k];
				k++;
			}
			result[word_index][k] = '\0';
			word_index++;
		}
	}
	result[word_index] = 0;
	return result;
}

int main(void)
{
	char *str = "I'm not ur ennemy, I am THE ennemy";
	char *charset = " ";
	char **tab;
	int i = 0;
	int j = 0;

	tab = ft_split(str, charset);
	while (tab[i] != 0)
	{
		printf("Mot %d: [%s]\n", i, tab[i]);
		j = 0;
		while (tab[i][j] != '\0')
		{
			j++;
		}
		free(tab[i]);
		i++;
	}
	free(tab);
	return 0;
}