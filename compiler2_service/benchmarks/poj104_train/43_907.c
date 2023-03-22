#define NUM_ITER 18795

#include <header.h>

int main_bench()
{
   int n,i,j,p,q,flag=0;
   my_scanf("%d",&n);
   for(i=3;i<=n/2;i+=2)
   {
		for(p=3;p<i/2;p+=2)
		{
			if(i%p==0)
				flag=1;
			    
		}
		for	(p=3;p<(n-i)/2;p+=2)
		{
			if((n-i)%p==0)
				flag=1;
			    
		}
		
		
			
				if(flag==0)
				{
					my_printf("%d %d\n",i,n-i);
					
				}
				flag=0;
			
		
	flag=0;  
   }                                                     
   return 0;
}