#include "libft.h"
#include <stdio.h>
#include <string.h>


static size_t	ft_strnlen(char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	i = 0;
	j = 0;
	destlen = ft_strnlen(dest, size);
	while (i < size && dest[i])
		i++;
	if (i == size)
		return (i + strlen(src));
	while (src[j])
	{
		if (j < size - destlen - 1)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
	}
	dest[i] = '\0';
	return (destlen + j);
}



int main() {
    char dest1[50] = "kratos";
    char src1[] = "messi";
    size_t size1 = 1;

    // Test avec la fonction réelle strlcat
    char dest2[50] = "kratos ";
    printf("Avant strlcat (real): dest = \"%s\", src = \"%s\", size = %zu\n", dest2, src1, size1);
    size_t result_real = strlcat(dest2, src1, size1);
    printf("Après strlcat (real): dest = \"%s\", result = %zu\n", dest2, result_real);

    // Test avec ta fonction ft_strlcat
    char dest3[50] = "kratos ";
    printf("Avant ft_strlcat: dest = \"%s\", src = \"%s\", size = %zu\n", dest3, src1, size1);
    size_t result_ft = ft_strlcat(dest3, src1, size1);
    printf("Après ft_strlcat: dest = \"%s\", result = %zu\n", dest3, result_ft);

    // Comparaison des résultats
    if (strcmp(dest2, dest3) == 0) {
        printf("Les résultats sont identiques entre strlcat et ft_strlcat.\n");
    } else {
        printf("Les résultats sont différents entre strlcat et ft_strlcat.\n");
    }

    // Comparaison des tailles retournées
    if (result_real == result_ft) {
        printf("Les tailles retournées sont identiques entre strlcat et ft_strlcat.\n");
    } else {
        printf("Les tailles retournées sont différentes entre strlcat et ft_strlcat.\n");
    }

    return 0;
}