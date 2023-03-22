#define NUM_ITER 46143

#include <header.h>

int main_bench()
{
    int n,i,j,x,b,c,m;
    int a[100];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	my_scanf("%d",&a[i]);
    }
    
    b=0;
    
    for(x=1;x<=n;x++)
    {
    	if(b<=a[x])
    	 {
    	  b=a[x];
    	  m=x;
    	 }
    	else
    	b=b;
    }
    my_printf("%d\n",b);
   
    c=0;
    a[m]=0;
      for(x=1;x<=n;x++)
    {
    	if(c<=a[x])
    	c=a[x];
    	else
    	c=c;
    }
    my_printf("%d",c);
    
}