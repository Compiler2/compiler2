#define NUM_ITER 36809

#include <header.h>

int main_bench()
{
	int n,i,j,x,y,t;
	my_scanf("%d",&n);
	for(i=2;i<=(n/2.0);i++)
	{	
	  for(x=2;x<i;x++)
		{
		      y=i%x;
	    	if(y==0) break;
		}
   	if(y!=0)
		{	
		j=n-i;
		for(t=2;t<=j/2.0;t++)
		{	y=j%t;
		    if(y==0) 
			break;
		}
		if(y!=0)
			my_printf("%d %d\n",i,j);
		}
	}
	return 0;			
}