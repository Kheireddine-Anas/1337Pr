/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:38:02 by akheired          #+#    #+#             */
/*   Updated: 2023/12/10 20:39:34 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	char	*dhld;
	char	*shld;
	size_t	i;

	i = 0;
	dhld = (char *)dst;
	shld = (char *)src;
	if (dst == src)
		return (dst);
	if (dhld > shld)
		while (len-- > 0)
			dhld[len] = shld[len];
	else
	{
		while (i < len)
		{
			dhld[i] = shld[i];
			i++;
		}
	}
	return (dst);
}
