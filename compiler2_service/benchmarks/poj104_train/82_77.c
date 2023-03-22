#define NUM_ITER 34462

#include <header.h>

int main_bench()
{
	int i,a,b,n,c[100],j=0,k,max=0;
	my_scanf("%d",&n);
	for(i=0;i<100;i++)
		c[i]=0;

	for(i=0;i<n;i++)
	{  
		my_scanf("%d%d",&a,&b);
        if(89<a&&a<141&&59<b&&b<91)
		{	
            c[j]++;
		}
		else
		{	
			j++;
		}	
	}
	for(k=0;k<j+1;k++)
	{
		if(c[k]>max)
			max=c[k];
	}
	my_printf("%d",max);
	return 0;
}

