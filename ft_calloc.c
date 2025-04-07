#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*to_return;

	if (nmemb == 0 || size == 0)
		return ((void *)malloc(1));
	total = nmemb * size;
	 // Vérifie les overflows
	if (total / nmemb != size && total / size != nmemb)
		return (NULL);
	to_return = (char *)malloc(total);
	if (to_return == NULL)
		to_return = NULL;
	else
		ft_bzero(to_return, total);
	return (to_return);
}


int	main(void)
{
	int i;
    int *tab;

	tab = (int *)ft_calloc(5, sizeof(int));

	printf("tab:\n");
    for (i = 0; i < 5; i++)
        printf("tab[%d] = %d\n", i, tab[i]);

	free(tab);
	return 0;
}