#include <header.h>

int main_bench()
{
	int n,i,t=0,leap=0,la[2];
	double ave,max=0,sum=0,cha[300];
	int a[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		sum+=a[i];
    }
    ave=sum/n;
    for(i=0;i<n;i++)
    {
		cha[i]=fabs(a[i]-ave);
		if(cha[i]>max)
		max=cha[i];
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			leap=leap+1;
			la[t]=a[i];
			t++;
		}
	}
	if(leap==1)
	my_printf("%d",la[0]);
	else
	my_printf("%d,%d",la[0],la[1]);
}