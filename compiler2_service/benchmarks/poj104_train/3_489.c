#include <header.h>

int main_bench()
{
	int n,k,i,j,p=0;
	int a[1000];
	my_scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if((a[i]+a[j])==k)
			{
				p=1;
				break;
			}
		}
		if(p==1)
			break;
	}
			if(p==1)
				my_printf("yes");
			else
				my_printf("no");
}