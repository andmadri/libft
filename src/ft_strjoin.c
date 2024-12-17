/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmadri <andmadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:21:42 by andmadri          #+#    #+#             */
/*   Updated: 2023/10/20 14:21:47 by andmadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	tot_len;

	tot_len = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc((tot_len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, s1, tot_len + 1);
	ft_strlcat(ptr, s2, tot_len + 1);
	return (ptr);
}
