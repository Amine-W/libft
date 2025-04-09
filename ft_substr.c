#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *d;
    unsigned int i;

    if (!s)
    return (NULL);
    if (start >= ft_strlen(s))
    {
        d = (char *)malloc(sizeof(char) * 1);
        if (!d)
            return (NULL);
        d[0] = '\0';
        return (d);
    }
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start); 
    d = (char *)malloc(sizeof(char) * (len + 1));
    if(!d)
        return (NULL);
    i = 0;
    while(s[start + i] && i < len)
    {
        d[i] = s[start + i];
        i++;
    }
    d[i] = '\0';
    return(d);
}

int main(void)
{
    char *str = "kratos messi";
    char *sub;

    sub = ft_substr(str, 7, 2);
    if (sub)
    {
        printf("Résultat : '%s'\n", sub);
        free(sub);
    }
    else
    {
        printf("Échec de l'allocation.\n");
    }

    return (0);
}