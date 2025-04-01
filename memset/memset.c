#include <unistd.h>
#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n) {
    if (n == 0)
        return s;
   while(n > 0)
   {
      *(char *)s = (char)c;
      s = (char *)s + 1;
      n--;
   }
   return s;
}

int   main(void)
{
    char str1[13] = "kratos messi";
    char str2[13] = "kratos messi";
    
    printf("Avant mon memeset(): %s\n", str1);
    ft_memset(str1, '$', 6);
    printf("Après mon memset(): %s\n", str1);
    
    memset(str2, '$', 6);
    printf("Après le vrai memset(): %s\n", str2);
    return 0;
}
