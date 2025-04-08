#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t dsize)
{
    size_t i = 0;

    if (dsize > 0)
    {
        while (src[i] && i < dsize - 1)
        {
            dst[i] = src[i];
            //printf("dst[%zu] = %c\n", i, dst[i]);
            i++;
        }
        dst[i] = '\0';
    }
    i = 0;
    while (src[i])
        i++;
    return (i);
}


int main(void)
{
    char dst[100];
    char src[] = "kratos messi";

    printf("%li\n", strlcpy(dst, src, 13));
}