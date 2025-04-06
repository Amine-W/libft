#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *s;
    const unsigned char *d;
    size_t i;

    s = (const unsigned char *)s1;
    d = (const unsigned char *)s2;
    i = 0;
    while(i < n)
    {
        if(s[i] != d[i])
            return (s[i] - d[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    char s1[] = {1, 2, 4, 4, 5};
    char s2[] = {1, 2, 3, 4, 5};

    int result = ft_memcmp(s1, s2, 5);

    if(result == 0)
        printf("Frro commence à mettre une différence\n");
    else if (result > 0)
        printf("s1 < s2\n");
    else 
        printf("s2 > s1\n");
    
    return 0;
}