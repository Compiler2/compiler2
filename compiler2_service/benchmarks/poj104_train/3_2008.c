#include <header.h>

int main_bench()
{
int n,m,i,j,a[1000];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]+a[j]==m) my_printf("yes"),i=n,j=n;
				else if(i==n-2&&j==n-1) my_printf("no");
return 0; 
}