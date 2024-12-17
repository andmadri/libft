/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmadri <andmadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:39:21 by andmadri          #+#    #+#             */
/*   Updated: 2023/10/06 23:37:39 by andmadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = dest;
	if (dest <= src)
	{
		while (n--)
		{
			*((unsigned char *)dest) = *((unsigned char *)src);
			dest++;
			src++;
		}
	}
	else if (dest > src)
	{
		dest += n - 1;
		src += n - 1;
		while (n--)
		{
			*((unsigned char *)dest) = *((unsigned char *)src);
			dest--;
			src--;
		}
	}
	return (ptr);
}
