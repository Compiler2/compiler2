#define NUM_ITER 271

#include <header.h>

int main_bench()
{
	int n;
	int a[100000],b[100000];
	int i,j;
	my_scanf("%d",&n);	
	for(i=1;i<100000;i++)
	{
		if(i==1)
			b[i]=1;
		if(i==2)
			b[i]=1;
		if(i>2)
			b[i]=b[i-2]+b[i-1];
	}
	for(i=0;i<n;i++)
	{my_scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		j=a[i];
		my_printf("%d\n",b[j]);
	
	}



	return 0;
		
		
		
		
	


}