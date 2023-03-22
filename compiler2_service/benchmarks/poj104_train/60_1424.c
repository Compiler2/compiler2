#define NUM_ITER 12221

#include <header.h>

int main_bench()
{
	int a,b,n,i,m=0,c;
	my_scanf("%d",&n) ;
	for(a=1;a<=n-2;a++)
	{
	    for(i=2;i<=a/2;i++)
	    {
		   if(a%i==0)break;
        }
	    if(i==a/2+1)
	    {
           b=a+2;
           for(c=2;c<=b/2;c++)
	       {
		      if(b%c==0)break;
           }
	       if(c==b/2+1)
	       {
              m++;
              my_printf("%d %d\n",a,b);
           }
        }
     }
     if(m==0)my_printf("empty");
}
               
	
