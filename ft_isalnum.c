/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnigella <dnigella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:19:12 by marvin            #+#    #+#             */
/*   Updated: 2019/09/30 19:28:25 by dnigella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int ch)
{
	if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
		return (1);
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}
