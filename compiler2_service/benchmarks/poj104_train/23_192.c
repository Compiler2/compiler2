#define NUM_ITER 1146418

#include <header.h>

int main_bench()
{
    char c[100];
    gets(c);
    int l,j;
    l=strlen(c);
    int i,t; 
    t=l; 
    for(i=l-1;i>=0;i--)
    {
               if (c[i]==' ')
                  {
                           for(j=i+1;j<t;j++)
                           {
                                             my_printf("%c",c[j]);
                           }
                           my_printf(" ");
                           t=i;
                  }
    }
    for(i=0;i<l;i++)
    {
                 if(c[i]==' ')
                 break;
                 else
                 my_printf("%c",c[i]);
    }
    getchar();
    getchar();
}