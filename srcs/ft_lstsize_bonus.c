/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:43:01 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/06 12:56:31 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of nodes in a list.
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
