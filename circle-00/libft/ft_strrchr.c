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
