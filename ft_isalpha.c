#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 89) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    printf("%i\n",ft_isalpha('8'));
}