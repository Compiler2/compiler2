#define NUM_ITER 719256

#include <header.h>

int main_bench()
{
 char *p;
 int i,j,k,n,m;
 p=(char *)malloc(100*sizeof(char));
 gets(p);
 n=strlen(p);
 for(i=0;i<n-2;i++)
    {
     my_printf("%c",*(p+i));
     if(*(p+i+2)==' '&&*(p+i+1)==' ')
       {
        while(*(p+i+2)==' ')
             {
              i++;
               }
       }
    }
    my_printf("%c%c",*(p+n-2),*(p+n-1));
}