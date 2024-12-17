/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmadri <andmadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:28:24 by andmadri          #+#    #+#             */
/*   Updated: 2023/10/06 23:43:16 by andmadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = dest;
	while (n--)
	{
		*((unsigned char *)dest) = *((unsigned char *)src);
		src++;
		dest++;
	}
	return (ptr);
}
