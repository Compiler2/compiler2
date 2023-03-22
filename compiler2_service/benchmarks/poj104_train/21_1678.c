#include <header.h>

int main_bench()
{
	int n,i,j,a[300],t=0;
	float s=0,aver,max,temp;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	aver=s/n;
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	max=aver-a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<aver) temp=aver-a[i];
		else temp=a[i]-aver;
		if(temp>max)
			max=temp;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<aver) temp=aver-a[i];
		else temp=a[i]-aver;
		if(temp==max)
		{
			t=t+1;
			if(t==1)
				my_printf("%d",a[i]);
			else
				my_printf(",%d",a[i]);
		}
	}
	return 0;
}