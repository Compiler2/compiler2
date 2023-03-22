#define NUM_ITER 49088

#include <header.h>

int main_bench()
{
	int n,a[99],f,s,i;
	my_scanf("%d",&n);
    for(i=0;i<=n-1;i++)
		my_scanf("%d",a+i);
	for(i=1,f=a[0];i<=n-1;i++)
		if(a[i]>f) f=a[i];
    for(i=0;i<=n-1;i++)
		if(a[i]<f) break;
    for(s=a[i],i=i+1;i<=n-1;i++)
		if(a[i]>s&&a[i]<f) s=a[i];
    my_printf("%d\n%d\n",f,s);
    return(0);
}