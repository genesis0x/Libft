#include "libft.h"

int		ft_isalnum(int c)
{
    if (ft_isalpha(c) && ft_isdigit(c))
        return (1);
    else
        return (0);
}