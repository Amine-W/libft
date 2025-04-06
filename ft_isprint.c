#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

int main(int ac, char **av)
{
    printf("%i\n",ft_isprint('a'));
}