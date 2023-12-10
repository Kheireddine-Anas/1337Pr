/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tg.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:46:30 by akheired          #+#    #+#             */
/*   Updated: 2023/12/09 19:50:24 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*hld;
	int				i;
	int				j;

	i = 0;
	j = len;
	hld = (unsigned char *)src;
	while (j-- > 0)
	{
		ft_memcpy(*(unsigned char *)dst, hld, len);
	}
	return (dst);
}