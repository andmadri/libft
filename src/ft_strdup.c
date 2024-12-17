/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmadri <andmadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:23:13 by andmadri          #+#    #+#             */
/*   Updated: 2023/10/20 14:21:29 by andmadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*cpy_s;

	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (0);
	cpy_s = ptr;
	while (*s)
	{
		*cpy_s = *s;
		cpy_s++;
		s++;
	}
	*cpy_s = '\0';
	return (ptr);
}
