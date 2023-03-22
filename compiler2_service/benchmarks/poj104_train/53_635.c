#define NUM_ITER 10718

#include <header.h>

int main_bench()
{
	int n,i,j,k=0,a[300],b[300],*p=b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	b[k++]=a[0];
	for(i=1;i<n;i++)
	{for(j=0;j<k;j++)
	{if(a[i]==b[j])
	break;
	else if(j==(k-1))
			b[k++]=a[i];
	}
	}
	for(j=0;j<(k-1);j++)
		my_printf("%d,",*(p+j));
	my_printf("%d",*(p+k-1));
}

