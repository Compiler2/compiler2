#define NUM_ITER 3332

#include <header.h>

int main_bench()
{	int n,i,num[300],s=0,u=0,m;
	float aver,t[300],max,sum=0,min;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d,",&num[i]);
	for(i=0;i<n;i++)
		sum=sum+(float)(num[i]);
	aver=sum/(float)(n);

	for(i=0;i<n;i++)
	
	t[i]=aver-(float)(num[i]);
	
	min=t[0];
	for(i=0;i<n;i++)
	{if(t[i]>min)
	{min=t[i];
	s=i;
		}
	max=t[0];
	for(m=0;m<n;m++)
	{if(t[m]<max)
	{max=t[m];
	u=m;
		}
	}
	
	}if(t[s]+t[u]<0)
		my_printf("%d",num[u]);
	else if(t[s]+t[u]>0)
		my_printf("%d",num[s]);
	else
		my_printf("%d,%d",num[s],num[u]);


}