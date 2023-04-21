#define NUM_ITER 3199

#include <header.h>

int main_bench()
{
	int a[300]={0},b[300]={0},i,j,n,s;
	float sum=0,aver,demin,demax;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		s=0;
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
				s++;
		}
		b[s]=a[i];
	}
	aver=sum/n;
	demin=aver-b[0];
	demax=b[n-1]-aver;
	if(demin==demax)
		my_printf("%d,%d",b[0],b[n-1]);
	if(demin>demax)
		my_printf("%d",b[0]);
	if(demin<demax)
		my_printf("%d",b[n-1]);
	return 0;
}

