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
    char str[] = "str";
    char *result = ft_memchr(str, 's', 3);
    
    if (result)
        printf("Voici l'occurence trouvée dans votre chaîne de catactères: %c\n", *result);
    else
        printf("Y'a pas\n");

    return 0;
}