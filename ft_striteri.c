/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:11:01 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/28 12:05:34 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void shift(unsigned int i, char *c)
{
    if (i % 2 == 0)
		*c =  *c + 1;
}

void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	unsigned int	i;
	
	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

int	main(void)
{
	char str[] = "wouboulilili";
	ft_striteri(str , shift);
	printf("%s", str);
}