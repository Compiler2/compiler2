#include <header.h>

int main_bench()
{
int n,i,j,t;
int a[30]={0};
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
  my_scanf("%d",&a[i]);
}
for(j=0;j<n-1;j++)
{
	for(i=0;i<n-1-j;i++)
		if(a[i]<a[i+1])
		{
		 t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
		}
}
for(i=0;i<2;i++)
my_printf("%d\n",a[i]);
return 0;
}