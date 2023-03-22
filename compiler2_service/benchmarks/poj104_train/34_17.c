#define NUM_ITER 265931

#include <header.h>

int main_bench()
{
    int m,n,i;
    my_scanf("%d",&m);
    int jiao(int );
    if(m!=1)
    {
    do{ 
       if(m%2==1)
    {
             n=m*3+1;
             my_printf("%d*3+1=%d\n",m,n);
    }
    if(m%2==0)
    {
              n=m/2;
              my_printf("%d/2=%d\n",m,n);
    }
    m=n;
      }
    while(n!=1);
    }
    my_printf("End");
    getchar();
    getchar();
    getchar();   
}