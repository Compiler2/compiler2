#include <header.h>

int main_bench()
{int f(int a,int n,int m);
	int a[100],i,j=1,n,m;
my_scanf("%d%d",&n,&m);for(i=1;i<=n;i++) my_scanf("%d",&a[i]);
a[0]=a[1];for(i=1;i<=n-1;i++){a[j]=a[f(j,n,m)];j=f(j,n,m);}a[j]=a[0];
my_printf("%d",a[1]);for(i=2;i<=n;i++)my_printf(" %d",a[i]);my_printf("\n");

}
int f(int a,int n,int m)
{if(a<=m) return (a+n-m);
else return (a-m);}