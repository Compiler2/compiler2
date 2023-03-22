#define NUM_ITER 23905

#include <header.h>

int main_bench()
{
	int n;
	int a[100],b[100];
	int i,j,min,max,tmp1=0,tmp2=1;
	float k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);
	}
	min=a[0];
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	for(i=min;i<max;i++)
	{
		k=i+0.5f;
		tmp1=0;
		for(j=0;j<n;j++)
		{
			if(k>=a[j]&&k<=b[j])
			{
				tmp1=1;
				break;
			}
		}
		if(tmp1==0)
		{
			tmp2=0;
			break;
		}
	}
	if(tmp2==1)
		my_printf("%d %d\n",min,max);
	else
		my_printf("no\n");
	return 0;
}