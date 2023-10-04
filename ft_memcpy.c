/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waon-in <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:00:31 by waon-in           #+#    #+#             */
/*   Updated: 2023/09/24 18:36:31 by waon-in          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_n;
	unsigned char	*src_n;

	dst_n = (unsigned char *)dst;
	src_n = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_n[i] = src_n[i];
		i++;
	}
	return (dst);
}
