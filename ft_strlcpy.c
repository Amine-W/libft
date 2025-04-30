#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t i = 0;

	if (dsize > 0)
	{
		while (src[i] && i < dsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
