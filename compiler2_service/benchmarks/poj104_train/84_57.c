#include <header.h>

int main_bench()
{
	signed int n,num[1000],i,out[2];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num[i]);
	}
	if(num[0]>num[1])
	{
		out[0]=num[0];
		out[1]=num[1];
	}
	else
	{
		out[0]=num[1];
		out[1]=num[0];
	}
	for(i=2;i<n;i++)
	{
		if(num[i]>out[0])
		{
			out[1]=out[0];
			out[0]=num[i];
		}
		else if(num[i]<out[0]&&num[i]>out[1])
			out[1]=num[i];
		else
			continue;
	}
	my_printf("%d\n%d\n",out[0],out[1]);
   	return 0;
}
