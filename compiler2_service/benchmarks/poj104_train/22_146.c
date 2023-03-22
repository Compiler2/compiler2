#define NUM_ITER 1530767

#include <header.h>

int main_bench()
{
	int i,k,p=0,max;
	int a[100]={0};
	char x;
	for(i=0;;i++)
	{
		my_scanf("%d",&a[i]);
		x=getchar();
			k=i;
		if(x != ',')
			break;
	}
	if(k==0)
		my_printf("No\n");
	if(k != 0)
	{
		for(i=1;i<=k;i++)
		{
			if(a[0]==a[i])
				p++;
			else break;
		}
		if(p==k)
			my_printf("No\n");
		else
		{
			max=a[0];
			for(i=0;i<=k;i++)
			{
			if(max<a[i])
				max=a[i];
			}
		for(i=0;i<=k;i++)
		{
			if(a[i]==max)
				a[i]=0;
		}
		max=a[0];
		for(i=0;i<=k;i++)
		{
			if(max<a[i])
				max=a[i];
		}
		my_printf("%d\n",max);
		}
		
	}
}