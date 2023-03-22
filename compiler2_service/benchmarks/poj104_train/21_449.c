#define NUM_ITER 53111

#include <header.h>

int main_bench()
{
	int i,n,x[300],max,min,s=0;
	float aver;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	{
		s=s+x[i];
	}
	aver=s*1.0/n;
	max=x[0];min=x[0];
	for(i=1;i<n;i++)
	{
		if(x[i]>max)
			max=x[i];
		else if(x[i]<min)
			min=x[i];
	}
	if(max==min)my_printf("%d",min);
	else if((max-aver)>(aver-min))
		my_printf("%d",max);
	else if((max-aver)<(aver-min))
		my_printf("%d",min);
	else
		my_printf("%d,%d",min,max);
}