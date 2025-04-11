#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    if (!s)
		    return (i);
    while(s[i])
        i++;
    return(i);
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
        dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}

int     is_set(char c, char const *set)
{
    int i;

    i = 0;
    while(set[i])
    {
        if(set[i] == c)
            return (1);
        i++;
    }
    return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t start;
    size_t end;
    char *str;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    while(s1[i] && is_set(s1[i], set))
        i++;
    start = i;
    i = ft_strlen(s1);
    while(i > 0 && (is_set(s1[i - 1], set)))
        i--;
    end = i;
    if (start >= end)
        return(ft_strdup(""));
    str = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!str)
        return(NULL);
    i = 0;
    while(start < end)
        str[i++] = s1[start++];
    str[i] = '\0';
    return (str);
    
}


int main(void)
{
    char *s1= "!!krato!s messi";
    char const *s = "!";
    printf("%s", ft_strtrim(s1, s));
}