#define NUM_ITER 718971

#include <header.h>

int main_bench()
{
    long int a;
    int x[5],i,j=0,n,m,y;
    my_scanf("%ld",&a);
    while(a>0)
         {x[j]=a%10;
          j++;
          a=a/10;
         }
    for(i=0;i<j;i++)
    my_printf("%d",x[i]);
}
