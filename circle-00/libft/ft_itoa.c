/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaji23 <isaji23@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:11:24 by isaji23           #+#    #+#             */
/*   Updated: 2025/11/06 14:24:33 by isaji23          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_len(int n)
{
	size_t	len;

	len = 0;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		negative;
	size_t	len;

	negative = 0;
	if (n < 0)
	{
		negative = 1;
		n = n * -1;
	}
	len = get_num_len(n);
	if (negative)
		a = malloc(sizeof(char *) * len + 2);
	else
		a = malloc(sizeof(char *) * len + 1);
	if (!a)
		return (NULL);
	if (negative)
		a[0] = '-';
	return (a);
}
