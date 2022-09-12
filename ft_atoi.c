#include "libft.h"

int ft_atoi(const char *s)
{
    unsigned    int i;
    long    res;
    long    sign;

    i = 0;
    res = 0;
    sign = 1;
    while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
        i++;
    if (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
        {
            sign = -1;
            i++;
        }
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + s[i] - 48;
        i++;
    }
    return (res * sign);
}