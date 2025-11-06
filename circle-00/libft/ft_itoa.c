/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inijimen <inijimen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:11:24 by isaji23           #+#    #+#             */
/*   Updated: 2025/11/06 20:37:23 by inijimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_len(long n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_digits(char *a, long num, int neg, size_t len)
{
	int	i;

	i = (int) len - 1;
	while (i >= neg)
	{
		a[i] = (char)('0' + (num % 10));
		num /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		neg;
	size_t	digits;
	size_t	len;
	char	*a;

	num = n;
	neg = 0;
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	digits = get_num_len(num);
	len = digits + neg;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	if (neg)
		a[0] = '-';
	fill_digits(a, num, neg, len);
	a[len] = '\0';
	return (a);
}
