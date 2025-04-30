/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:42:21 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/30 21:09:25 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *hay, const char *ndl, size_t max_len)
{
	size_t	ndl_len;
	size_t	i;
	size_t	j;

	if (!ndl)
	{
		return ((char *)hay);
	}
	ndl_len = 0;
	while (ndl[ndl_len])
	{
		ndl_len++;
	}
	i = 0;
	while (i < max_len && hay[i])
	{
		j = 0;
		while (i + j < max_len && hay[i + j] == ndl[j])
		{
			j++;
			if (j == ndl_len)
			{
				return ((char *)(hay + i));
			}
		}
		i++;
	}
	return (NULL);
}
