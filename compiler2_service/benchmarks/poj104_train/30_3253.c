#define NUM_ITER 93056

#include <header.h>

int main_bench()
{
    int i,n,a[100];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		a[i-1]=i;
	for(i=0;i<n;i++)
	{
		if((a[i]%7==0)||a[i]==17||a[i]==27||a[i]==37||a[i]==47||a[i]==57||a[i]==67||a[i]==71||a[i]==72||a[i]==73||a[i]==74||a[i]==75||a[i]==76||a[i]==78||a[i]==79||a[i]==87||a[i]==97)
			a[i]=0;
	}
	int sum=0;
    for(i=0;i<n;i++)
	{
		sum=sum+a[i]*a[i];
	}
	my_printf("%d\n",sum);


}
