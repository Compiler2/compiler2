#define NUM_ITER 2908

#include <header.h>

void f1(float a[],int x);
int main_bench()
{
	int n;
	float shuzu[1000],ping;
	float max,min,sum=0;
	int s;
	my_scanf("%d",&n);
	for (s=0;s<n;s++)
	{
		my_scanf("%f",&shuzu[s]);
	}
	f1(shuzu,n);
	for (s=0;s<n;s++)
	{
		sum=sum+shuzu[s];
	}
	ping=sum/n;
	max=shuzu[0]-ping;
	min=ping-shuzu[n-1];
	if(max==min) my_printf("%.0f,%.0f",shuzu[n-1],shuzu[0]);
	else if(max>min) my_printf("%.0f",shuzu[0]);
	else my_printf("%.0f",shuzu[n-1]);
}
void f1(float a[],int x)
{
	int i,j;
	float t;
	for (i=0;i<x-1;i++)
	{
		for (j=0;j<x-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}




