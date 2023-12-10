/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:38:02 by akheired          #+#    #+#             */
/*   Updated: 2023/12/09 20:42:09 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*hld;
	int					i;

	i = 0;
	hld = (unsigned char *)src;
	if (dst == src)
		return (dst);
	while (len-- > 0)
	{
		*(unsigned char *)(dst + i) = hld[i];
		i++;
	}
	*(unsigned char *)(dst + i) = '\0';
}
