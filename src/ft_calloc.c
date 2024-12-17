/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmadri <andmadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:20:18 by andmadri          #+#    #+#             */
/*   Updated: 2023/10/10 19:41:23 by andmadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"
#include <limits.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	ptr = 0;
	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	else if ((nelem * elsize) / elsize != nelem)
	{
		return (0);
	}
	ptr = malloc(elsize * nelem);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nelem * elsize);
	return (ptr);
}
