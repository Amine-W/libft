#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c >= 65 && c <= 89) || (c >= 97 && c <= 122) || (c >= '0'&& c <= '9'))
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    printf("%i\n",ft_isalnum('a'));
}