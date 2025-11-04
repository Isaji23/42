/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inijimen <inijimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:19:36 by inijimen          #+#    #+#             */
/*   Updated: 2025/11/04 20:19:36 by inijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *) big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (j < little_len && i + j < len && big[i + j] == little[j])
			j++;
		if (j == little_len)
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
