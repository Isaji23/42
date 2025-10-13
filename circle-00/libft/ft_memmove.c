#include "libft.h"

static void	move_forwards(unsigned char *dest,
	const unsigned char *src,
	size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	move_backwards(unsigned char *dest,
	const unsigned char *src,
	size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		i--;
		dest[i] = src[i];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (dest == src || n == 0)
		return (dest);
	ptr_dest = (unsigned char *) dest;
	ptr_src = (const unsigned char *) src;
	if (ptr_dest < ptr_src)
		move_forwards(ptr_dest, ptr_src, n);
	else
		move_backwards(ptr_dest, ptr_src, n);
	return (dest);
}
