#include <header.h>

int main_bench()
{
int n,i,j[100];
double a[100],b[100],x,y[100];
my_scanf("%d",&n);
my_scanf("%lf %lf",&a[0],&b[0]);
x=b[0]/a[0];
for(i=1;i<n;i++)
{
	my_scanf("%lf %lf",&a[i],&b[i]);
    y[i]=b[i]/a[i];
	if(x-y[i]>0.05)
		j[i]=1;
	else if(y[i]-x>0.05)
		j[i]=2;
	else
		j[i]=0;
}
for(i=1;i<n;i++)
{
	if(j[i]==1)
		my_printf("worse\n");
    if(j[i]==2)
		my_printf("better\n");
	if(j[i]==0)
		my_printf("same\n");
}
return 0;
}
