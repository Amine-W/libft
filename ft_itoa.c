/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:02:00 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/28 16:38:54 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_intlen(int n)
{
	int	total;

	total = 0;
	while(n > 0)
	{
		n /= 10;
		total++;
	}
	return(total);
}

char *ft_itoa(int n)
{
	char 		*str;
	int			size;
	char		res;
	
	size = ft_intlen(n);
	//printf("Size[%i]\n", size);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if(!str)
		return(NULL);
	str[size] = '\0';
	res = 0;
	while(size > 0)
	{
		res =  (n % 10) + '0';
		//printf("res[%c]\n", res);
		n  /= 10;
		//printf("n[%i]\n", n);
		//printf("Size[%i]\n", size);
		str[size -1] = res;
		//printf("str[%i][%c]\n", size, str[size]);
		size--;
	}
	return(str);
	
}

int	main(void)
{
	printf("%s", ft_itoa(1337));
}