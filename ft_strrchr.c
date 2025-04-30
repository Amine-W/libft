/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:32:14 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/30 08:41:01 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strrchr(const char *s, int c) 
{
	size_t i = 0;

	while (s[i])
	{
		i++;
	}
	while (i > 0) 
	{
		i--;
		if (s[i] == (char)c) {
			return (char *)&s[i];
	}
	}
	if ((char)c == '\0') {
		return (char *)&s[i];
	}
	return (NULL);
}

int main(void) 
{
	const char str[] = "And the winner is, La Salle";
	char c = 'a';
	char *result;
	
	result = ft_strrchr(str, c);
	printf("%s",result);
	return (0);
}

