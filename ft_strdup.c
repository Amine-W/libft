#include <stdio.h>
#include <stdlib.h>

static int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strdup(const char *s)
{
    int i;
    char *dst;

    dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!dst)
        return NULL;
    i = 0;
    while (s[i])
    {
        dst [i] = s[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}

int main(void)
{
    printf("%s", ft_strdup("ouioui"));
}