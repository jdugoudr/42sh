/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:24:53 by jmartel           #+#    #+#             */
/*   Updated: 2019/03/04 21:06:39 by ldedier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_last(t_list **start, t_list *new)
{
	t_list		*head;

	if (!start || !new)
		return ;
	if (!*start)
	{
		*start = new;
		return ;
	}
	head = *start;
	while (head->next != NULL)
		head = head->next;
	head->next = new;
	new->next = NULL;
	return ;
}
