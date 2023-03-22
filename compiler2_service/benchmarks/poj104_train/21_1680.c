#define NUM_ITER 41490

#include <header.h>

void average(int a[],float b[])
{
	int n=0,sum=0,i;
	float aver;
	for(;a[n]!=0;n++)
		sum+=a[n];
	aver=(float)sum/n;
	for(i=0;i<n;i++)
		b[i]=a[i]-aver;
}
float max(float b[],int n)
{
	int i,k=0;
	for(i=0;i<n;i++)
	if(fabs(b[i])>fabs(b[k])) k=i;
	return fabs(b[k]);
}
int main_bench()
{
	int n,a[300]={0},i,j=0;
	float b[300]={0},c;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	average(a,b);
	c=max(b,n);
	for(i=0;i<n;i++)
	{
		if(b[i]==(-c)) 
		{
			if(j!=0) my_printf(",");
			my_printf("%d",a[i]);
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==c)
		{
			if(j!=0) my_printf(",");
			my_printf("%d",a[i]);
		}
	}
	my_printf("\n");
}
