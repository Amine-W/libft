#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned const char *s;

    if (!dst || !src)
        return NULL;

    d = (unsigned char *)dst;
    s = (unsigned const char *)src;

    i = 0;
    while (i < n)
    {
        d[i] = s[i];  
        i++;
    }
    return ((void *)d);  
}

int main()
{
    char d[] = ""; 
    const char s[] = "kratos messi";
    
    printf("Dest: %s\n", ft_memcpy(d, s, sizeof(s)));

    return 0;
}
