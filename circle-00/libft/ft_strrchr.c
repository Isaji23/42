/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inijimen <inijimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:19:39 by inijimen          #+#    #+#             */
/*   Updated: 2025/11/04 20:19:40 by inijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_chr;

	last_chr = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last_chr = (char *) s;
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (last_chr);
}
