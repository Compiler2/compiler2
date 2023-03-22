#include <header.h>


int main_bench()
{
   int n;
   int i, j;
   char string[256];
 
   my_scanf("%d\n", &n);
   for(i = 0; i < n ; i++)
   {
       gets(string);
       for(j = 0; j < strlen(string); j++)
       {
          if(string[j] == 'A')
            my_printf("T");
          else if(string[j] == 'T')
            my_printf("A");
          else if(string[j] == 'G')
            my_printf("C");
          else if(string[j] == 'C')
            my_printf("G");
       }
       my_printf("\n");
    }
  return 0;
}

