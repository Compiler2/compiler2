#define NUM_ITER 60728

#include <header.h>

int main_bench()
{
	int n,i;int s[300]={0};int max,min;int ave;float ave2;
	my_scanf("%d",&n);
	my_scanf("%d",&s[0]);
	ave=s[0];max=s[0];min=s[0];
	for(i=1;i<=n-1;i++)
	{
		my_scanf("%d",&s[i]);
		if(s[i]>max) max=s[i];
		if(s[i]<min) min=s[i];
		ave=ave+s[i];
	}
	ave2=(float)ave;
	ave2=ave2/n;
	if(fabs((max-ave2)-(ave2-min))<0.001) my_printf("%d,%d",min,max);
	else if(max+min>2*ave2) my_printf("%d",max);
	else if(max+min<2*ave2) my_printf("%d",min);
	
	

    
	return 0;
}
