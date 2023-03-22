#include <header.h>

int main_bench()
{
int n,a[101],i,*pt1,*pt2,c;
my_scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	if(i==0)
		my_scanf("%d",&a[i]);
	else
		my_scanf(" %d",&a[i]);
}
for(i=0;i<(n/2);i++){
pt1=&a[n-1-i];
pt2=&a[i];
c=*pt1;
a[n-1-i]=*pt2;
a[i]=c;
}
for(i=0;i<n;i++)
{
	if(i==0)
my_printf("%d",a[i]);
	else
my_printf(" %d",a[i]);
}
return 0;
}
