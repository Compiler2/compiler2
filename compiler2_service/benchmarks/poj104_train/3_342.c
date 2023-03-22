#define NUM_ITER 53150

#include <header.h>

int main_bench()
{
    int n,k,x[1000]={0},i,j;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
           if((x[i]+x[j])==k)
		   {
			   my_printf("yes");
			   break;
		   }
		}
           if((x[i]+x[j])==k)			   
			   break;
		
	}
	    if((x[i]+x[j])!=k)
		   my_printf("no");
			   return 0;
}