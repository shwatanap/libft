/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:39:54 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/08 01:43:34 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tolower(char c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}
