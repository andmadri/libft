/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmadri <andmadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:53:14 by andmadri          #+#    #+#             */
/*   Updated: 2023/10/22 21:03:05 by andmadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if ((char)c == *str)
			return ((char *)str);
		else
			str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (0);
}
