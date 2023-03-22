#define NUM_ITER 2648

#include <header.h>


int main_bench()

{
	int a[500],b[500],i,k,e,N;

	my_scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		my_scanf("%d",&a[i]);
	}

	for(i=0;i<N;i++)
	{
		if(a[i]%2==1)
		{
			b[i]=a[i];
		}
		else
		{
			b[i]=0;
		}
	}
	
	for(k=1;k<=N;k++)
	{	
	   for(i=0;i<N-1;i++)
	   {
	    	if(b[i]>=b[i+1])
			{
		    	e=b[i+1];
			    b[i+1]=b[i];
			    b[i]=e;
			}
	   }
	}
	for(i=0;i<N;i++)
	{
		if(b[i]!=0&&i!=N-1)
		{
			my_printf("%d,",b[i]);
		}
		if(b[i]!=0&&i==N-1)
		{
			my_printf("%d",b[N-1]);
		}
	}


	return 0;
}