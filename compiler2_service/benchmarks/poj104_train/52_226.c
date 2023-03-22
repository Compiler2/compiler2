#include <header.h>

int main_bench()
{
    int n,m,A[200],i,p,q;
    my_scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
     my_scanf("%d",&A[i]);
}
    for(p=1;p<=(n-m);p++)
	{
	   A[n+p]=A[p];
	}
	for(q=(n-m+1);q<(n+n-m);q++)
	{
	my_printf("%d ",A[q]);
	}
	my_printf("%d",A[n+n-m]);
   return 0;
}