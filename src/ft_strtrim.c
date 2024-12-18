/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmadri <andmadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:51:01 by andmadri          #+#    #+#             */
/*   Updated: 2023/10/22 18:31:11 by andmadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && start < end)
	{
		start++;
	}
	while (ft_strchr(set, s1[end - 1]) && end > start)
	{
		end--;
	}
	ptr = malloc((end - start + 1) * sizeof(char));
	ft_strlcpy(ptr, &s1[start], end - start + 1);
	return (ptr);
}
