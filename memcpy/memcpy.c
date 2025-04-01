#include <stdio.h>
#include <string.h>

void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned int i;
    i = 0;
    while (i < n) {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return dest;
}

int main() 
{
    char src[] = "Hello, World!";
    char dest[20];

    memcpy(dest, src, 100);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
