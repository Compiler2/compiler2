#define NUM_ITER 204240

#include <header.h>

int main_bench()
{
	int i,j,a[5][5],m,n,k,re=0,max,tap=0;
	for (i=0;i<5;i++)
		
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
		
	}
	

	for(i=0;i<5;i++)
	{
		k=0;re=0;
		max=a[i][0];
	    for(j=1;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				k=j;
			}
		}
		    for(n=0;n<5;n++)
			{ 
				if(max>a[n][k])
			re=1;
				
			    
			
			}

		
	if (re==0)
	{tap=1;
		my_printf("%d %d %d",i+1,k+1,max);
	}
	}
	if (tap==0)
		my_printf("not found");

	
	return 0;

}