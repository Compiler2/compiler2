#include <header.h>

int main_bench()
{
    int i,j,n;
	int a[10000];
    for(i=1;i<=10000;i++)
		a[i]=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&j);
		if(a[j]==0)
		{  
		    a[j]=1;
			if(i==1)
				my_printf("%d",j);
			else
				my_printf(",%d",j);
		}
	}

	return 0;
}