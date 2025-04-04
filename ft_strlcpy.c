#include <stdio.h>

size_t strlcpy(char *dst, const char *restrict src, size_t dsize)
{
    int     i;

    i = 0;
    while (src[i] && --dsize)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    while (src[i])
    {
        ++i;
    }
    return (i);
}


int main(void)
{
    char dst[100];
    char src[] = "kratos messi";

    printf("%li\n", strlcpy(dst, src, 6));
}