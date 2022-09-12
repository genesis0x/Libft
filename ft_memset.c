#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{

	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
