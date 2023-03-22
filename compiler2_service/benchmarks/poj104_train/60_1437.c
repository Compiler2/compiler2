#define NUM_ITER 23091

#include <header.h>

int main_bench()
{
    int n,a,b,i,k,l;
    my_scanf("%d",&n);
    k=0;
    l=0;
    a=2;
    for(a=2;(a+2)<=n;a++)
    {
            b=a+2;
            for(i=2;i*i<=b;i++)
            {
                 if(a%i==0||b%i==0) 
                 {k++;}
            }
            if(k==0)
            {
            my_printf("%d %d\n",a,b);
            l++;
            }
            k=0;                                                 
    }
    if(l==0)
    {
    my_printf("empty");
    }
}