#include <header.h>

int main_bench()
{
	int i,n,m,*a;
	my_scanf("%d%d",&n,&m);
	a=(int*)calloc(n+m,sizeof(int));
	a+=m;
	for(i=0;i<n;i++)my_scanf("%d",a++);
	for(i=0;i<m;i++)a--,*(a-n)=*a;a-=n;n--;
	for(i=0;i<n;i++)my_printf("%d ",a[i]);
	my_printf("%d",a[n]);
}

