#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned const char *s;
    char *d;
    size_t i;

    s = (const unsigned char *)src;
    d = (unsigned char *)dst;
    i = 0;
    if (d > s)
    {
        i = n;
        while (i-- > 0)
            d[i] = s[i];
    }
    else 
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dst);
}

int main(void)
{
    char *d;
    char *s = "kratos messi";

    printf("%s\n", ft_memmove(d, s, 6));
}