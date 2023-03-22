#define NUM_ITER 1450195

#include <header.h>

int main_bench()
{
	int n,a[300],i,w,m,t,k=2;
	my_scanf("%d",&a[1]);
	for(n=2;my_scanf(",%d",&a[n]);n++)
	for(i=1;i<n;i++)
	{
		for(m=n;m>i;m--)
		if(a[i]<a[m])
			t=a[i],a[i]=a[m],a[m]=t;
	}
	if(a[1]==a[n-1])
		my_printf("No\n");
	else
	{
		for(i=1;i<=n;i++)
		{
			w=i+1;
		    if(a[i]==a[w])
				k++;
			else break;
		}
		my_printf("%d",a[k]);
	}
	return 0;
}
