#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *s;
    char *d;
    size_t i;

    s = (const char *)src;
    d = (char *)dst;
    i = 0;
    if (d > s)
    {
        while (len-- > 0)
            d[len] = s[len];
    }
    else 
    {
        while (i < len)
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