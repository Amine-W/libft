#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if(s[i] == (char)c)
            
        i++;
    }
    return ((const char *)s);
}

int main() {

    const char * source = "The C Language";
    char * destination;
    char * pointer;
    char *s1;
    char c;
    int length = strlen( source );
    
    /* We clone the inital string */
    destination = (char *) malloc( sizeof( char) * (length+1) );
    strcpy( destination, source );
        
    /* We replace all 'a' characters */
    while (pointer = strchr( destination, 'a' ) ) {
        *pointer = 'A';
    }
    
    /* Display result : The C LAnguAge */
    printf( "Result : %s\n", destination );
        
    /* Release dynamicly allocated memory */
    free( destination );
    
    return 0;
}