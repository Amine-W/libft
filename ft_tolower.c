#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

int main(void)
{
    printf("%c", ft_tolower('c'));
    return 0;
}