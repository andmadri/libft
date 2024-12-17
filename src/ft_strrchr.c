/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmadri <andmadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:53:28 by andmadri          #+#    #+#             */
/*   Updated: 2023/10/22 21:02:46 by andmadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	const char	*ptr;

	ptr = 0;
	while (*str)
	{
		if ((char)c == *str)
			ptr = str;
		str++;
	}
	if (c == '\0')
	{
		ptr = str;
		return ((char *)ptr);
	}
	return ((char *)ptr);
}
