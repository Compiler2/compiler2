#include <header.h>

move(int a[100],int n,int m)
{int *p,b;
 b=*(a+n-1);
 for(p=a+n-1;p>a;p--)
	 *p=*(p-1);
 *a=b;
 m--;
 if(m>0)
	 move(a,n,m);
}
int main_bench()
{
	int n,m,a[100],i;
	my_scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	move(a,n,m);
	for(i=0;i<(n-1);i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
    return 0;
}