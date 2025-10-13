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
