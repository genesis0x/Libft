#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    unsigned    const   char    *s;
    unsigned    char    *d;

    s = src;
    d = dst;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}

/*int main(void)
{
	char src[50] = "1337 Med Is loading";
	char dest[50];
	char *ret;

	ret = ft_memcpy(dest, src, 8);
	printf("%s", ret);
	return (0);
}*/