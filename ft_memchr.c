#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned int i;
    unsigned char *str;

    str = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        if (str[i] ==  (unsigned char)c)
        {
            return ((void *)&str[i]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char str[] = "kratos messi";
    char *result = ft_memchr(str, 'm', 8);
    
    if (result)
        printf("il y'a bien une occurence dans votre chaîne de caractères: %s\n", result);
    else
        printf("Y'a pas\n");
    return 0;
}