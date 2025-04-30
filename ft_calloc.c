/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:36 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/30 20:13:36 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*to_return;

	if (nmemb == 0 || size == 0)
		return ((void *)malloc(1));
	if (nmemb > INT_MAX / size)
		return (NULL);
	total = nmemb * size;
	to_return = (char *)malloc(total);
	if (to_return == NULL)
		to_return = NULL;
	else
		ft_bzero(to_return, total);
	return (to_return);
}
