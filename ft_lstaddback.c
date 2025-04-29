/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:37:15 by amwahab           #+#    #+#             */
/*   Updated: 2025/04/29 16:27:17 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;
	
	new->next = NULL;
	temp = *lst;
	while(temp->next != NULL)
		temp=temp->next;
	temp->next = new;
}