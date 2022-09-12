#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t	srclen;
	size_t	i;
	size_t	dstlen;
	size_t	res;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > dstsize)
		res = srclen + dstsize;
	else
		res = dstlen + srclen;
	if (dstsize == 0)
		return (res);
	while (src[i] && dstlen + i < (dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (res);
}
