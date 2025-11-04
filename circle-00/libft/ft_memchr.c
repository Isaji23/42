/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inijimen <inijimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:17:59 by inijimen          #+#    #+#             */
/*   Updated: 2025/11/04 20:18:00 by inijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_ptr;

	i = 0;
	s_ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char) c)
			return ((void *) &s_ptr[i]);
		i++;
	}
	return (NULL);
}
