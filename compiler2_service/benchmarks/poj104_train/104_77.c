#define NUM_ITER 1602829

#include <header.h>



int main_bench()
{
    int m,n,i,j,t,s;
    my_scanf("%d%d",&m,&n);
    s=0;
    for (i=1;i<=10;i++)
    {
        t=n;
        for(j=1;j<=10;j++)
        {
                          if (m==t) {my_printf("%d",m);s=2;break;}
                          t=t/2; 
                          
        }
        if (s==2) break;
        m=m/2;
    }

    return 0;
} 