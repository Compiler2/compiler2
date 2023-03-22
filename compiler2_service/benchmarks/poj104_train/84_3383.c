#define NUM_ITER 53646

#include <header.h>

int main_bench()
{
	int a[100],n,x,y,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	x=a[0];
	y=a[0];
	for(i=1;i<n;i++)
		if(x<a[i])x=a[i];
	for(i=1;i<n;i++)
		if(y<a[i]&&a[i]!=x)y=a[i];
		my_printf("%d\n",x);
		my_printf("%d\n",y);





}
