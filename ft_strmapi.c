/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:09:40 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/28 13:00:52 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char shift(unsigned int i, char c)
{
    if (i % 2 == 0)
		c =  c + 1;
	return(c);
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char *s, char (*f)(unsigned int,char))
{
	unsigned int	i;
	char			*tab;
	int				size;
	
	size = ft_strlen(s);
	tab = (char*)malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while(s[i])
	{
		// printf("Index[%i]\n", i);
		tab[i] = f(i, s[i]);
		printf("Lettre[%d]: %c\n", i, tab[i]);
		i++;
	}
	tab[i] = '\0';
	return(tab);
}

int	main(void)
{
	char str[] = "wouboulilili";
	char *tab;
	tab = ft_strmapi(str, shift);
	printf("%s", tab);
}