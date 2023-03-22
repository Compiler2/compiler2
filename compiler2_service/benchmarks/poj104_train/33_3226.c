#include <header.h>


void com(char seq[])
{
     int len = strlen(seq);
     int i;
     
     for(i = 0; i <= len - 1; i++)
           switch(seq[i])
           {
                         case 'A':
                              my_printf("T");
                              break;
                         case 'T':
                              my_printf("A");
                              break;
                         case 'G':
                              my_printf("C");
                              break;
                         case 'C':
                              my_printf("G");
                              break;
           }
     
     my_printf("\n");
}

int main_bench()
{
    int n;
    my_scanf("%d\n", &n);
    
    char seq[256];
    int i;
    for(i = 1; i <= n; i++)
    {
          gets(seq);
          com(seq);
    }

    return 0;
}

