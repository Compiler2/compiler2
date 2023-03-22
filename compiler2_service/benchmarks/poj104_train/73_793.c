#define NUM_ITER 195323

#include <header.h>

int main_bench()
{
	int a[6][6],i,j,p,q,max[6],min[6],t=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
    max[0]=a[0][0];
	min[0]=a[0][0];
	for(p=0;p<5;p++)
	{   
		for(q=0;q<5;q++)
		{
			if(max[p]<a[p][q])
			{
				max[p]=a[p][q];
			}
			if(min[q]>a[p][q])
			{
				min[q]=a[p][q];
			}
		}
	}
	for(p=0;p<5;p++)
	{   
		for(q=0;q<5;q++)
		{
    	    if(max[p]==min[q])
			{	
	        	my_printf("%d %d %d",p+1,q+1,a[p][q]);
		        t++;
			}
		}
	}
	if(t==0)
	{
		 my_printf("not found");
	}
	return 0;
}