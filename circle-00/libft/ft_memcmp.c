#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
    const unsigned char	*ptr_s1;
    const unsigned char	*ptr_s2;

	i = 0;
	ptr_s1 = (const unsigned char *) s1;
	ptr_s2 = (const unsigned char *) s2;
	while (i < n && ptr_s1[i] == ptr_s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char) ptr_s1[i] - (unsigned char) ptr_s2[i]);
}
