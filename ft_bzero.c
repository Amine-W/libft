#include <stdio.h>

void bzero(void *s, size_t n)
{
    char *c;
    int i;

    c = (char *) s;
    i = 0;
    while (n--)
    {
        c[i] = '\0';
        i++;
    }
}