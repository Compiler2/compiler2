#include <header.h>

int main_bench()
{
	int n,m,i,j,s[150]={0},a[150]={0};
	my_scanf("%d %d",&n,&m);

	for(i=0;i<n;i++)
		my_scanf("%d",&s[i]);

	for(i=n-m,j=0;i<n;i++,j++)
		a[j]=s[i];

	for(i=n-m-1;i>=0;i--)
		s[i+m]=s[i];

	for(i=0;i<m;i++)
		s[i]=a[i];

	for(i=0;i<n-1;i++)
		my_printf("%d ",s[i]);
	my_printf("%d\n",s[n-1]);
}