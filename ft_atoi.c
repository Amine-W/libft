#include <stdio.h>

int ft_atoi(char *str)
{
    static int i;
    static int sign;
    static int result;
    
    i = 0;
    sign = 1;
    result = 0;

   while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
      i++;
   if (str[i] == '-' || str[i] == '+')
   {
      if (str[i] == '-')
         sign = -1;
      i++;
   }
   while (str[i] >= '0' && str[i] <= '9')
   {
    result = result * 10 + (str[i] - '0');    
      i++;
   }
   return (result * sign);
}

int main (void)
{
    char str[] = "   -12345abc";
    int result = ft_atoi(str);
    printf("The converted integer is: %d\n", result);
    return 0;
}