#include <stdio.h>

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int main(void)
{
    printf("%i\n", ft_strlen("kratos messi"));
}