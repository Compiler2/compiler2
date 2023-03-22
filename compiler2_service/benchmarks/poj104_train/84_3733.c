#define NUM_ITER 50027

#include <header.h>


int main_bench()
{
	int n,i,j,u,max=0,max2=0;
	my_scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
    for(j=1;j<=n;j++)
		if(max<a[j-1]) max=a[j-1];
		else max=max;
    for(u=1;u<=n;u++)
        if(max2<a[u-1]&&max>a[u-1]) max2=a[u-1];
        else max2=max2;

    my_printf("%d\n",max);
    my_printf("%d\n",max2);
	return 0;
}
