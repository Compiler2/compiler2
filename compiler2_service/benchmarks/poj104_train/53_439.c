#define NUM_ITER 12485

#include <header.h>

int main_bench()
{
	int i,x=0,y,z=0,p,enter,count;
	int a[300];
	my_scanf("%d",&i);
	
	while(z<=i-1)
	{
		z++;
		count=0;
		my_scanf("%d",&enter);
		
		for(y=0;y<x;y++)
		{
			if(enter==a[y])
			count++;
		}
		if(count!=0) continue;
		a[x]=enter;
		x++;
		
	}
		


	for(p=0;p<x-1;p++)
	{
		my_printf("%d,",a[p]);
    }
	my_printf("%d",a[x-1]);
	
	
	


}