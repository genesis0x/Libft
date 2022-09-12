#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char	*first;
	char	*sec;
	size_t	i;

	i = 0;
	first = (char *)s1;
	sec = (char *)s2;
	while (i < n)
	{
		if (first[i] != sec[i])
			return (first[i] - sec[i]);
		i++;
	}
	return (0);
}
