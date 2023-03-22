#define NUM_ITER 993191

#include <header.h>


int main_bench()
{
    int t,n,a,b,c,d,e,i,j,k,l,m;
    
    my_scanf("%d",&n);
    t=n;
    j=t/10000;
    if(j!=0)
    {
      i=5;
      t=0;
    }    
    
    j=t/1000;
    if(j!=0)
    {
      i=4;
      t=0;
    }
    
    j=t/100;
    if(j!=0)
    {
      i=3;
      t=0;
    }
    
    j=t/10;
    if(j!=0)
    {
      i=2;
      t=0;
    }

    j=t/1;
    if(j!=0)
    {
      i=1;
      t=0;
    }

    if(n==0)
      my_printf("%d",0);
    else
    {
      a=n/10000;
      n=n%10000;
      b=n/1000;
      n=n%1000;
      c=n/100;
      n=n%100;
      d=n/10;
      n=n%10;
      e=n;

    
    
    if(i==5) 
      my_printf("%d%d%d%d%d",e,d,c,b,a);
    if(i==4)
      my_printf("%d%d%d%d",e,d,c,b);
    if(i==3)
      my_printf("%d%d%d",e,d,c);
    if(i==2)
      my_printf("%d%d",e,d);
    if(i==1)
      my_printf("%d",e);
    }
    return 0;
}