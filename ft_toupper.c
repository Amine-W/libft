#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return (c);
}

int main(void)
{
    printf("%c", ft_toupper('c'));
    return 0;
}