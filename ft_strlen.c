#include <stdio.h>

int ft_strlen(char *str)
{
    static int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int main(void)
{
    printf("%i\n", ft_strlen("kratos messi"));
}