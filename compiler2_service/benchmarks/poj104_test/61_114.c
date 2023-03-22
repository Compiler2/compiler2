#include <header.h>

int main_bench()
{
	int n,i,j,m,a[100]={0};
	a[1]=a[2]=1;
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf("%d",&m);
		if(m==1||m==2)my_printf("1\n");
		else 
		{
			for(i=3;i<=m;i++)
			{
				a[i]=a[i-1]+a[i-2];
			}
		    my_printf("%d\n",a[m]);
		}
	}
}
