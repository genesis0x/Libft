#include "libft.h"

int		ft_isprint(int c)
{
    if (c >= 32 && c <= 127)
        return (1);
    else
        return (0);
}